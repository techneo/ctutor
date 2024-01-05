#include <stdio.h>

#ifdef TEST1
void test1(void)
{
    printf("inside test 1");
}
#endif

#ifdef TEST2
void test2(void)
{
    printf("inside test 2");
}
#endif

#ifdef TEST3
void test3(void)
{
    printf("inside test 3");
}
#endif