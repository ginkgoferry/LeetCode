PYTHON ?= python3
CXX ?= clang++
CXXFLAGS ?= -std=c++20 -Wall -Wextra -Wshadow -Werror=return-type -O2 -DLOCAL -I.
DEBUG_FLAGS ?= -std=c++20 -Wall -Wextra -Wshadow -Werror=return-type -O0 -g -DLOCAL -I. -fsanitize=address,undefined
BUILD_DIR ?= build
TRACKER := $(PYTHON) tools/leetcode.py
PLAN_ARG = $(if $(PLAN),--plan "$(PLAN)",)
TRAINING_ARGS = $(if $(TRAIN),--stage "$(TRAIN)",) $(if $(filter 1,$(FREE)),--free-only,) \
	$(if $(MIN_RATING),--min-rating "$(MIN_RATING)",) $(if $(MAX_RATING),--max-rating "$(MAX_RATING)",) \
	$(if $(UNRATED),--unrated "$(UNRATED)",)

TARGET = $(BUILD_DIR)/$(subst /,_,$(basename $(FILE)))
CONFIDENCE_ARG = $(if $(CONFIDENCE),--confidence "$(CONFIDENCE)",)
MINUTES_ARG = $(if $(MINUTES),--minutes "$(MINUTES)",)
NOTE_ARG = $(if $(NOTE),--note "$(NOTE)",)
DATE_ARG = $(if $(DATE),--date "$(DATE)",)
REVIEW_STATUS_ARG = $(if $(STATUS),--status "$(STATUS)",)

.DEFAULT_GOAL := help

.PHONY: help plans pending use today stats next reviews list browse show start done hint review star reviewed note extra practice ci \
	run build build-debug debug unit test skeletons prepare sync check verify clean require-id require-file require-note

help:
	@echo "日常刷题"
	@echo "  make plans | make use PLAN=...    查看/设置当前题单"
	@echo "  make next TRAIN=basic FREE=1 MAX_RATING=1700"
	@echo "  make list UNRATED=only            单独查看未标分题"
	@echo "  make browse PLAN=lingcha-basic    按章节和原始顺序浏览题单"
	@echo "  make today                         今日复习队列 + 下一题建议"
	@echo "  make next [PLAN=hot100] [CHAPTER=哈希] [DIFFICULTY=EASY]"
	@echo "  make start ID=283                 标记为进行中"
	@echo "  make run ID=283                   编译并运行题目"
	@echo "  make practice ID=283              本题运行 + 数据、文档与官方断言检查"
	@echo "  make extra ID=283                 创建独立个人补充用例文件"
	@echo "  make debug ID=283                 使用 Sanitizer 调试"
	@echo ""
	@echo "记录"
	@echo "  make done ID=283 [CONFIDENCE=4] [MINUTES=25] [NOTE='...']"
	@echo "  make hint/review/star ID=...      记录对应状态"
	@echo "  make reviewed ID=283 CONFIDENCE=4 [MINUTES=8] [NOTE='...']"
	@echo "  make note ID=283 NOTE='...'       追加一句复盘"
	@echo ""
	@echo "查看与维护"
	@echo "  make stats | reviews | show ID=283"
	@echo "  make pending PLAN=all LIMIT=20    查看元数据和环境待准备清单"
	@echo "  make sync | check | unit | test | verify"
	@echo "  make ci [BASE=...] [DRY_RUN=1]     CI 环境编译范围检查"
	@echo "  make skeletons PLAN=lingcha-sliding-window  编译题单全部本地环境"
	@echo "  make prepare PLAN=lingcha-sliding-window    从核对过的样例准备缺失文件"
	@echo "  可用 DATE=YYYY-MM-DD 补录；完整参数见 docs/WORKFLOW.md"

pending:
	$(TRACKER) pending $(PLAN_ARG) $(if $(LIMIT),--limit "$(LIMIT)",)

plans:
	$(TRACKER) plans

use:
	@test -n "$(PLAN)" || (echo "缺少 PLAN，请先运行 make plans" >&2; exit 2)
	$(TRACKER) use "$(PLAN)"

today:
	$(TRACKER) today $(PLAN_ARG) $(TRAINING_ARGS) $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",)

stats:
	$(TRACKER) stats $(PLAN_ARG) $(TRAINING_ARGS)

next:
	$(TRACKER) next $(PLAN_ARG) $(TRAINING_ARGS) $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",) $(if $(RANDOM),--random,)

reviews:
	$(TRACKER) reviews $(PLAN_ARG) $(DATE_ARG)

list:
	$(TRACKER) list $(PLAN_ARG) $(TRAINING_ARGS) $(if $(VIEW),--view "$(VIEW)",) $(if $(STATUS),--status "$(STATUS)",) $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",) $(if $(QUERY),--query "$(QUERY)",)

browse:
	$(MAKE) list VIEW=sections

show: require-id
	$(TRACKER) show "$(ID)"

start: require-id
	$(TRACKER) start "$(ID)" $(NOTE_ARG) $(DATE_ARG)

done: require-id
	$(TRACKER) record "$(ID)" DONE $(CONFIDENCE_ARG) $(MINUTES_ARG) $(NOTE_ARG) $(DATE_ARG)

hint: require-id
	$(TRACKER) record "$(ID)" HINT $(CONFIDENCE_ARG) $(MINUTES_ARG) $(NOTE_ARG) $(DATE_ARG)

review: require-id
	$(TRACKER) record "$(ID)" REVIEW $(CONFIDENCE_ARG) $(MINUTES_ARG) $(NOTE_ARG) $(DATE_ARG)

star: require-id
	$(TRACKER) record "$(ID)" STAR $(CONFIDENCE_ARG) $(MINUTES_ARG) $(NOTE_ARG) $(DATE_ARG)

reviewed: require-id
	$(TRACKER) reviewed "$(ID)" $(CONFIDENCE_ARG) $(MINUTES_ARG) $(NOTE_ARG) $(DATE_ARG) $(REVIEW_STATUS_ARG)

note: require-id require-note
	$(TRACKER) note "$(ID)" "$(NOTE)" $(DATE_ARG)

build: require-file
	@mkdir -p "$(BUILD_DIR)"
	$(CXX) $(CXXFLAGS) "$(FILE)" -o "$(TARGET)"

build-debug: require-file
	@mkdir -p "$(BUILD_DIR)"
	$(CXX) $(DEBUG_FLAGS) "$(FILE)" -o "$(BUILD_DIR)/debug-active"

ifneq ($(strip $(ID)),)
run:
	@CXX="$(CXX)" $(TRACKER) run "$(ID)" $(if $(TIMEOUT),--timeout "$(TIMEOUT)",)

debug:
	@CXX="$(CXX)" $(TRACKER) run "$(ID)" --debug $(if $(TIMEOUT),--timeout "$(TIMEOUT)",)
else
run: build
	@"$(TARGET)"

debug: require-file
	@mkdir -p "$(BUILD_DIR)"
	$(CXX) $(DEBUG_FLAGS) "$(FILE)" -o "$(TARGET)_debug"
	@"$(TARGET)_debug"
endif

unit:
	$(PYTHON) -m unittest discover -s tests -v

extra: require-id
	$(TRACKER) extra "$(ID)"

practice: require-id
	@CXX="$(CXX)" $(TRACKER) practice "$(ID)" $(if $(filter 1,$(DEBUG)),--debug,) $(if $(TIMEOUT),--timeout "$(TIMEOUT)",)

ci:
	@CXX="$(CXX)" $(PYTHON) -m tools.ci $(if $(BASE),--base "$(BASE)",) $(if $(filter 1,$(DRY_RUN)),--dry-run,)

skeletons:
	@CXX="$(CXX)" $(TRACKER) skeletons $(PLAN_ARG)

prepare:
	$(PYTHON) -m tools.prepare_environments $(PLAN_ARG)
	$(TRACKER) sync
	$(TRACKER) check

test: unit
	$(TRACKER) test

sync:
	$(TRACKER) sync

check:
	$(TRACKER) check

verify: unit
	$(TRACKER) check --compile

clean:
	rm -rf "$(BUILD_DIR)"

require-id:
	@test -n "$(ID)" || (echo "缺少 ID，例如：make done ID=283" >&2; exit 2)

require-file:
	@test -n "$(FILE)" || (echo "缺少 FILE，例如：make run FILE=cpp/01_hash/001_two_sum.cpp" >&2; exit 2)
	@test -f "$(FILE)" || (echo "文件不存在：$(FILE)" >&2; exit 2)

require-note:
	@test -n "$(NOTE)" || (echo "缺少 NOTE，例如：make note ID=283 NOTE='易错点'" >&2; exit 2)
