"""LOCAL legality checks for random APIs; these do not prove their distributions."""
SUPPORTED = {'398', '382', '380', '381', '528', '710', '478', '497', '519'}


def declarations(identifier):
    mapping = {
        '398': ['const auto localOriginalNums = nums;'],
        '382': ['const auto localOriginalValues = listToVector(head);'],
        '380': ['set<int> localAllowedValues;'],
        '381': ['multiset<int> localAllowedValues;'],
        '528': ['const auto localOriginalWeights = w;'],
        '710': ['const auto localOriginalBlacklist = blacklist;'],
        '497': ['const auto localOriginalRectangles = rects;'],
        '519': ['set<pair<int, int>> localFlippedCells;'],
    }
    return mapping.get(identifier, [])


def checks(identifier, operation):
    if identifier == '398' and operation == 'pick':
        return ['assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalNums.size());',
                'assert(localOriginalNums[localResult] == target);']
    if identifier == '382' and operation == 'getRandom':
        return ['assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());']
    if identifier in ('380', '381') and operation == 'getRandom':
        return ['assert(localAllowedValues.count(localResult));']
    if identifier == '528' and operation == 'pickIndex':
        return ['assert(localResult >= 0 && static_cast<size_t>(localResult) < localOriginalWeights.size());',
                'assert(localOriginalWeights[localResult] > 0);']
    if identifier == '710' and operation == 'pick':
        return ['assert(localResult >= 0 && localResult < n);',
                'assert(find(localOriginalBlacklist.begin(), localOriginalBlacklist.end(), localResult) == localOriginalBlacklist.end());']
    if identifier == '478' and operation == 'randPoint':
        return ['assert(localResult.size() == 2);',
                'double dx = localResult[0] - x_center, dy = localResult[1] - y_center;',
                'assert(isfinite(dx) && isfinite(dy));',
                'assert(dx * dx + dy * dy <= radius * radius * (1 + 1e-10));']
    if identifier == '497' and operation == 'pick':
        return ['assert(localResult.size() == 2);', 'bool contained = false;',
                'for (const auto& rect : localOriginalRectangles)',
                '    contained |= localResult[0] >= rect[0] && localResult[0] <= rect[2] && localResult[1] >= rect[1] && localResult[1] <= rect[3];',
                'assert(contained);']
    if identifier == '519' and operation == 'flip':
        return ['assert(localResult.size() == 2);',
                'assert(localResult[0] >= 0 && localResult[0] < m && localResult[1] >= 0 && localResult[1] < n);',
                'assert(localFlippedCells.insert({localResult[0], localResult[1]}).second);']
    return None


def transitions(identifier, operation):
    if identifier in ('380', '381'):
        if operation == 'insert':
            return ['localAllowedValues.insert(val);']
        if operation == 'remove':
            return ['auto found = localAllowedValues.find(val);',
                    'if (found != localAllowedValues.end()) localAllowedValues.erase(found);']
    if identifier == '519' and operation == 'reset':
        return ['localFlippedCells.clear();']
    return []
