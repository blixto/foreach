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
    putchar('\n');
    printf("Number of elements: %d\n", c);
    return OK;
}