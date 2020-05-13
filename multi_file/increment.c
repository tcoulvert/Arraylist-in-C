int var = 1;

int increment()
{
    static int e = 0;
    e++;
    return e;
}
