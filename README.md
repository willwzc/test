# C 语言练习来源索引

整理日期：2026-11-02。

复习内容和页码以课程资料 `Notes/cnotes.pdf` 为准。Notion 的旧记录仅作历史参考，不用于认定当前复习进度。

此目录按来源分别存放课程笔记示例和练习册题目。2026-11-02 已将原 practice/test 中的内容直接移到 practice，并删除空的 test 文件夹；practice 沿用原仓库的 Git 历史和 origin 远程配置，目录整理作为原有历史之后的新变更记录。

整理前的 Git 记录另有本机备份，位置为课程目录下的 `.repo-backups/practice-test-2026-11-02-mvzwldh1/`。

## 目录

- `cnotes/`：33 个 C 源文件，其中 32 个对应课程笔记中的示例、自测或其改写版本，另有 1 个来源未确认的函数自测；同时存放补充练习 `quotes.sh`。
- `exercisesInC/`：17 个 C 源文件，对应练习册中的独立题目。
- 按用户要求，来源不明确的代码和补充练习也统一放入 `cnotes/`，保留来源备注。
- [organization-manifest.json](organization-manifest.json)：记录全部 101 个原有文件的原位置、新位置、大小、SHA-256 校验值和 Git 跟踪状态，其中包含仅在本机保留的编译产物。

同名可执行文件随源码一起移动。Hello World 的可执行文件名为 `hello_world`，其内嵌源文件名是 `my_test_hello.c`，因此与该源码一起放入 `cnotes/`。

## 编译产物与 GitHub 同步

2026-11-03 起，编译生成的二进制文件不再提交到 GitHub。50 个已有可执行文件保留在本机，并从 Git 跟踪中移除；以前的提交历史保留。

`.gitignore` 记录了现有无扩展名可执行文件的路径，并忽略常见的目标文件、可执行文件、库、调试和覆盖率输出，以及 `build/`、`bin/` 目录。

以后新增程序时，可以将编译输出统一放入 `build/`。如果仍在源码旁生成无扩展名可执行文件，需要在 `.gitignore` 中补充对应路径。

整理仅改变文件位置，保留原文件名和内容。来源归类不代表程序已满足题目全部要求，也不据此认定学习任务是否完成。

下面使用 PDF 阅读器中的页码，不使用带动画展开页的 `cnotes_slides.pdf` 页码。练习册以实际题号为准；目录中旧的页码信息可能与正文位置不同。

## 课程笔记：cnotes.pdf

来源：本机课程目录中的 `Notes/cnotes.pdf`。

| 源文件 | PDF 页码 | 对应内容 |
|---|---:|---|
| [my_test_hello.c](cnotes/my_test_hello.c) | 13 | Hello World! |
| [area_rectangle.c](cnotes/area_rectangle.c) | 15 | Area of a Rectangle |
| [char.c](cnotes/char.c) | 18 | The Character Type |
| [double.c](cnotes/double.c) | 19 | Floating Types；调整数值与输出格式的版本 |
| [precedence.c](cnotes/precedence.c) | 27 | Operators；前置、后置自增的变体 |
| [power.c](cnotes/power.c) | 28 | Assignment；输出 2 的幂 |
| [power-trans.c](cnotes/power-trans.c) | 28 | Assignment 示例的后置自增对照版本 |
| [randnum.c](cnotes/randnum.c) | 29 | The Standard Library；rand 与四列输出 |
| [min.c](cnotes/min.c) | 34 | A Practical Example of if；三个整数的最小值 |
| [countdown.c](cnotes/countdown.c) | 35 | The while() Statement；倒计时 |
| [triples_N.c](cnotes/triples_N.c) | 37 | A Triply-Nested Loop |
| [min_func.c](cnotes/min_func.c) | 44 | Simple Functions；两数最小值 |
| [call_by_value.c](cnotes/call_by_value.c) | 45 | Call-by-Value |
| [numfactors.c](cnotes/numfactors.c) | 46 | Testing；统计因数 |
| [asserts.c](cnotes/asserts.c) | 48 | Assert Testing；numfactors 断言 |
| [Multiply.c](cnotes/Multiply.c) | 49 | Self-test: Multiply；循环乘法 |
| [macros.c](cnotes/macros.c) | 51 | Replacing Functions with Macros |
| [inline.c](cnotes/inline.c) | 52 | The inline modifier |
| [factorial.c](cnotes/factorial.c) | 54 | Factorials via Recursion |
| [multi_advanced.c](cnotes/multi_advanced.c) | 55 | Self-test: Multiply (Advanced)；递归乘法 |
| [float.c](cnotes/float.c) | 58 | Binary Storage of Numbers；0.1 的浮点近似 |
| [sizeof.c](cnotes/sizeof.c) | 59 | sizeof() |
| [cast.c](cnotes/cast.c) | 61 | Casting；球体体积与转换 |
| [getput.c](cnotes/getput.c) | 64 | Using getchar() and putchar()；以 ! 结束 |
| [getput-2.c](cnotes/getput-2.c) | 64 | Using getchar() and putchar()；以 EOF 结束 |
| [cap.c](cnotes/cap.c) | 65 | Capitalization |
| [ctype.c](cnotes/ctype.c) | 66 | ctype.h；先判断小写字符 |
| [ctype-2.c](cnotes/ctype-2.c) | 66 | ctype.h；直接调用 toupper |
| [typedf.c](cnotes/typedf.c) | 70 | Combining typedefs and enums；星期 |
| [boolean.c](cnotes/boolean.c) | 72 | Booleans；自定义枚举类型 |
| [boolean-2.c](cnotes/boolean-2.c) | 72 | Booleans；使用 stdbool.h |
| [fvr.c](cnotes/fvr.c) | 73 | Fever；温度判断 |

## 练习册：exercisesInC.pdf

来源：本机课程目录中的 `Exercises-In-C/exercisesInC.pdf`。

练习册中要求“编译运行课程笔记示例”的条目不重复收录；这些代码归入 `cnotes/`。

| 源文件 | PDF 页码 | 练习题号 | 对应题目 |
|---|---:|---|---|
| [twice_the_sum.c](exercisesInC/twice_the_sum.c) | 7 | 1.2.1 | Twice the Sum |
| [letter_c.c](exercisesInC/letter_c.c) | 7–8 | 1.3.1 | Letter C |
| [++a++.c](exercisesInC/++a++.c) | 8 | 1.5.1 | ++a++；自增、自减对照 |
| [randomness.c](exercisesInC/randomness.c) | 8 | 1.6.1 | Randomness |
| [find_max.c](exercisesInC/find_max.c) | 9 | 1.8.1 | find_max |
| [odd_num.c](exercisesInC/odd_num.c) | 9 | 1.9.1 | Loving Oddness |
| [linear_rand.c](exercisesInC/linear_rand.c) | 9 | 1.10.1 | Linear Congruent Generator；相关尝试，归类不表示已完整满足题目 |
| [higher_lower.c](exercisesInC/higher_lower.c) | 10 | 1.11.1 | Higher-Lower |
| [ATM.c](exercisesInC/ATM.c) | 10 | 1.12.1 | Cash Machine (ATM) |
| [triangle_num.c](exercisesInC/triangle_num.c) | 10–11 | 1.13.1 | Triangle Numbers |
| [Collatz_conjecture.c](exercisesInC/Collatz_conjecture.c) | 11 | 1.15.1 | Hailstone |
| [Collatz_conjecture-lseq.c](exercisesInC/Collatz_conjecture-lseq.c) | 11–12 | 1.16.1 / 1.16.2 | Hailstone Sequence |
| [primes.c](exercisesInC/primes.c) | 12 | 1.17.1 | Primes |
| [triangles.c](exercisesInC/triangles.c) | 12 | 1.18.1 | Triangles |
| [time.c](exercisesInC/time.c) | 12–13 | 1.19.1 | Time Flies |
| [primes_end_with_3.c](exercisesInC/primes_end_with_3.c) | 13 | 1.20.1 | Dirichlet Distribution |
| [strmerge.c](exercisesInC/strmerge.c) | 29 | 3.15.1 | Merging Strings |

## 补充练习（统一放入 cnotes）

| 文件 | 原因 |
|---|---|
| [my_test.c](cnotes/my_test.c) | 两参数求和函数自测；尚未在两份 PDF 中确认直接出处，按用户要求存入 cnotes。对应可执行文件 my_test 一并移动。 |
| [quotes.sh](cnotes/quotes.sh) | Bash 字符串判断练习，作为补充练习按用户要求存入 cnotes，不标注虚构的 PDF 页码。 |

后续来源不明确的练习同样放入 `cnotes/`；确认出处后再补充索引。
