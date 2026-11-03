/*
 * hello.c —— UTF-8 编码练习文件
 *
 * 用这条命令观察它在 Git 里的真实状态：
 *   git ls-files --eol src/hello.c
 * 用这条命令检查开头有没有 BOM（EF BB BF）：
 *   Format-Hex -Path .\src\hello.c -Count 16
 */
#include <stdio.h>

int main(void)
{
    /* 中文注释：仓库里统一 UTF-8（无 BOM），换行统一 LF */
    printf("main 分支版本\n");
    return 0;
}
