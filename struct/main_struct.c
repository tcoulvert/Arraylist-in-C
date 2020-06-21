#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char *name; 
    int  id;
    float gpa;
} mystruct_t;

int main(int argc, char *argv[])
{
    mystruct_t student = student("thomas", 31596, 3.4);
}

struct student(char *name, int id, float gpa)
{
    mystruct_t a;

    a.name = name;
    a.id = id;
    a.gpa = gpa;
    
    return a;
}
