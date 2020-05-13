
#include <stdio.h>
#include <stdlib.h>

int a;
extern int b;
static int c;

int alloc(int ** p);

int main(int argc, char *argv[])
{
    int * p1 = NULL;
    alloc(&p1);
    printf("%p\n", p1);
    return 0;
}    

int alloc(int ** p)
{
    int * p2 = (int *)malloc(10);
    printf("%p\n", p2);
    *p = p2;
    return 0;
}
