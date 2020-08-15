#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int sub(int a , int b)
{
    return a-b;
}

int main()
{
    int i;
    int  (*fun)(int a, int b);
    fun=add;
    i=fun(5,10);
    printf("%d\n", i);
    fun=sub;
    i=fun(5,10);
    printf("%d\n", i);
}
