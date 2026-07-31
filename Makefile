PYTHON ?= python3
CXX ?= clang++
CXXFLAGS ?= -std=c++20 -Wall -Wextra -Wshadow -O2 -DLOCAL -I.
DEBUG_FLAGS ?= -std=c++20 -Wall -Wextra -Wshadow -O0 -g -DLOCAL -I. -fsanitize=address,undefined
BUILD_DIR ?= build
TRACKER := $(PYTHON) tools/leetcode.py

TARGET = $(BUILD_DIR)/$(subst /,_,$(basename $(FILE)))
CONFIDENCE_ARG = $(if $(CONFIDENCE),--confidence "$(CONFIDENCE)",)
MINUTES_ARG = $(if $(MINUTES),--minutes "$(MINUTES)",)
NOTE_ARG = $(if $(NOTE),--note "$(NOTE)",)
DATE_ARG = $(if $(DATE),--date "$(DATE)",)
REVIEW_STATUS_ARG = $(if $(STATUS),--status "$(STATUS)",)

.DEFAULT_GOAL := help

.PHONY: help today stats next reviews list show start done hint review star reviewed note \
	run build build-debug debug unit test sync check verify clean require-id require-file require-note

help:
	@echo "日常刷题"
	@echo "  make today                         今日复习队列 + 下一题建议"
	@echo "  make next [CHAPTER=哈希] [DIFFICULTY=EASY]"
	@echo "  make start ID=283                 标记为进行中"
	@echo "  make run ID=283                   编译并运行题目"
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
	@echo "  make sync | check | unit | test | verify"
	@echo "  可用 DATE=YYYY-MM-DD 补录；完整参数见 docs/WORKFLOW.md"

today:
	$(TRACKER) today $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",)

stats:
	$(TRACKER) stats

next:
	$(TRACKER) next $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",) $(if $(RANDOM),--random,)

reviews:
	$(TRACKER) reviews $(DATE_ARG)

list:
	$(TRACKER) list $(if $(STATUS),--status "$(STATUS)",) $(if $(CHAPTER),--chapter "$(CHAPTER)",) $(if $(DIFFICULTY),--difficulty "$(DIFFICULTY)",) $(if $(QUERY),--query "$(QUERY)",)

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
	@CXX="$(CXX)" $(TRACKER) run "$(ID)"

debug:
	@CXX="$(CXX)" $(TRACKER) run "$(ID)" --debug
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
