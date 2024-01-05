/*
   Data : 14.12.23
   Filename : macro.c
   Description: This file is to show the usage of macros
*/

#include <stdio.h>

#define TXT_SIZE 10

int main(void)
{
    char text1[TXT_SIZE]="OK";
    char text2[TXT_SIZE]="HELLO";
    char text3[TXT_SIZE]="HELLO";
    char text4[TXT_SIZE]="HELLO";
    char text5[TXT_SIZE]="ddd";

    printf ("%s  !",text1);
    

    for (int i=0;i<strlen(text1);i++)
    {
        printf("[%c]",text1[i]);
    }

    return (0);

}