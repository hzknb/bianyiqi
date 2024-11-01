#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


// 定义token的类型，加减乘除和整形
enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};


// 定义每个token的类型和值，如果是加减乘除就没有对应的值
struct token{
    int token;
    int intvalue;
};

