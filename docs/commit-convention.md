# 提交信息规范（模板）

## 格式

```text
<type>(<scope>): <subject>
<空行>
<body 可选，说明为什么改、影响范围>
<空行>
<footer 可选，关联需求/缺陷号>
```

- `subject`：不超过 50 个字符，动词开头，结尾不加句号。
- `body`：每行不超过 72 个字符，写"为什么"而不是"改了什么"。
- `footer`：`Refs: #123`、`BREAKING CHANGE: ...`。

## type 取值

| type | 含义 |
| --- | --- |
| feat | 新功能 |
| fix | 修复缺陷 |
| docs | 文档 |
| style | 格式（不影响逻辑） |
| refactor | 重构 |
| perf | 性能优化 |
| test | 测试 |
| build | 构建 / 依赖 |
| ci | 持续集成 |
| chore | 杂项 |

## 示例

```text
feat(login): 增加手机号验证码登录

原登录只支持密码，客服反馈老年用户输入困难。
新增验证码通道，复用现有短信服务。

Refs: #128
```

```text
fix(uart): 修复波特率配置溢出

波特率大于 921600 时寄存器计算溢出，导致通信失败。
改为 64 位中间变量并在初始化时校验范围。
```

## 分支命名

| 前缀 | 用途 | 示例 |
| --- | --- | --- |
| feature/ | 新功能 | feature/sms-login |
| bugfix/ | 一般缺陷 | bugfix/uart-rate |
| hotfix/ | 线上紧急修复 | hotfix/v1.2.1-crash |
| release/ | 发布准备 | release/v1.2.0 |
| docs/ | 文档 | docs/api-guide |

## 合并请求（MR/PR）检查清单

- [ ] 提交信息符合上面的 type 规范
- [ ] 一个 MR 只做一件事，改动行数可控
- [ ] 本地跑过编译 / 单元测试
- [ ] 无调试代码、无临时打印、无敏感信息
- [ ] 新增文件编码为 UTF-8（无 BOM），换行符合 `.gitattributes`
- [ ] 关联对应需求或缺陷编号
