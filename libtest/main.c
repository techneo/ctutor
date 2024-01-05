#include <stdio.h>
#include "add.h"

int main(void)
{
    int a;
    int b;
    int c;
    a = 12;
    b = 55;
    c = add(a,b);
    printf("%d + %d = %d",a,b,c);
}