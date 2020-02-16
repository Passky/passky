#ifndef Wu
#include <string.h>
#include <stdio.h>
#include <string.h>
#define SWAP(a, b) \
    {              \
        a = a + b; \
        b = a - b; \
        a = a - b; \
    }
#define MATHCMP(x, y, ...)                                  \
    int _mathcmp##__VA_ARGS__(const void *a, const void *b) \
    {                                                       \
        const x *p1 = (const x *)a;                         \
        const x *p2 = (const x *)b;                         \
        return y * (*p1 - *p2);                             \
    }
#define STRCMP(y, ...)                                     \
    int _strcmp##__VA_ARGS__(const void *a, const void *b) \
    {                                                      \
        const char *p1 = (const char *)a;                  \
        const char *p2 = (const char *)b;                  \
        return y * (strcmp(p1, p2));                       \
    }
#define STRUCTCMP(x, ...)                                     \
    int _structcmp##__VA_ARGS__(const void *a, const void *b) \
    {                                                         \
        const struct x *p1 = (const struct x *)a;             \
        const struct x *p2 = (const struct x *)b;
#define MYMAL(...)                                            \
    __VA_ARGS__##** _malloc2d(int m, int n)                                  \
    {                                                               \
        __VA_ARGS__##** backing;                                     \
        backing = (__VA_ARGS__##**)malloc(m * sizeof(__VA_ARGS__##*)); \
        for (int i = 0;i<n;i++)\
        {\
            backing[i] = (__VA_ARGS__##*)malloc(n * sizeof(__VA_ARGS__));\
        }\
        return backing;\
 }


#define MYGET                             \
    char *s_gets(char *st, int n)         \
    {                                     \
        char *ret_val;                    \
        char *find;                       \
        ret_val = fgets(st, n, stdin);    \
        if (ret_val)                      \
        {                                 \
            find = (strchr(st, '\n'));    \
            if (find)                     \
                *find = '\n';             \
            else                          \
                while (getchar() != '\n') \
                    continue;             \
        }                                 \
        return ret_val;                   \
    }
//查找换行符,如果地址不是NULL,则防止空字符并处理剩余行
#define Wu ordinary
#endif