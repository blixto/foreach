#include <stdio.h>
#include "syntexes.h"
#include "data.h"
#include "func.h"

int
main(void)
{
    int c;

    char array[] = {'a', 'b', 'c', 'd', 'e'};
    char i;
    foreach(c,i,array,char)
        putchar(i);
    printf("\r\n");
    printf("Number of elements: %d\r\n", c);
    return OK;
}