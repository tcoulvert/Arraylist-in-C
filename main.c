#include <stdio.h>
#include <stdlib.h>

int a;
extern int b;
static int c;

int increment();

int main(int argc, char *argv[])
{
    int d = 3;
    static int e;
    int * f = NULL;

    f = (int *)malloc(sizeof(int));
    printf("%d\n", *f);
    *f = 42;
    printf("%d\n", *f);
    free(f);

    f = &d;
    printf("%d\n", *f);

    printf("hello world\n");
    printf("e=%d\n", increment());
    printf("e=%d\n", increment());
    return 0;
}    

int increment()
{
    static int e = 0;
    e++;
    return e;
}
