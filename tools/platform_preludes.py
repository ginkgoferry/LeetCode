"""LOCAL platform mocks, based on public API contracts and platform metadata."""
PRELUDES = {
    '1237': '''
// LOCAL implementations match the public platform metadata's function IDs.
class CustomFunction {
    int identifier;
public:
    explicit CustomFunction(int id) : identifier(id) { assert(id >= 1 && id <= 9); }
    int f(int x, int y) {
        assert(x >= 1 && x <= 1000 && y >= 1 && y <= 1000);
        switch (identifier) {
            case 1: return x + y;
            case 2: return x * y;
            case 3: return x * x + y;
            case 4: return x + y * y;
            case 5: return x * x + y * y;
            case 6: return (x + y) * (x + y);
            case 7: return x * x * x + y * y * y;
            case 8: return x * x * y;
            case 9: return x * y * y;
        }
        assert(false); return 0;
    }
};
''',
    '843': '''
// LOCAL Master protocol. Only guess() belongs to the submitted API.
class Master {
    string secret;
    set<string> allowed;
    int limit, calls = 0;
    bool found = false;
public:
    Master(string word, const vector<string>& words, int maximum)
        : secret(std::move(word)), allowed(words.begin(), words.end()), limit(maximum) {}
    int guess(string word) {
        assert(++calls <= limit);
        if (!allowed.count(word)) return -1;
        assert(word.size() == secret.size());
        int matches = 0;
        for (size_t i = 0; i < word.size(); ++i) matches += word[i] == secret[i];
        found |= word == secret;
        return matches;
    }
    bool localSucceeded() const { return found && calls <= limit; }
};
''',
}
