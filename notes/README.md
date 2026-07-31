# 笔记目录

这里放可复用的专题理解；单次刷题记录、状态和复习排期统一通过根目录的记录命令维护。

- `review.md`：自动生成的复习队列和最近记录，不要手工编辑。
- `notes01.md`：现有哈希专题学习笔记。
- 新专题可复制 [`../templates/note.md`](../templates/note.md)，建议命名为
  `01_hash.md`、`02_two_pointers.md` 这类稳定名称。
- 只想本地保存、不提交的草稿使用 `*.local.md` 后缀。

专题笔记更适合记录识别信号、通用不变量、模板差异和反复踩坑；一道题的一句话提醒则使用：

```bash
make note ID=1 NOTE="先查 complement，再写入当前下标"
```
