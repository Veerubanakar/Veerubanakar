#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int sub(int a,int b)
{
    return a-b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int (*func_ptr)(int,int);
    func_ptr=add;
    printf("add(3,2)=%d\n",func_ptr(3,2));
    func_ptr=mul;
    printf("mul(3,2)=%d\n",func_ptr(3,2));
    func_ptr=sub;
    printf("sub(3,2)=%d\n",func_ptr(3,2));
    func_ptr=div;
    printf("div(3,3)=%d\n",func_ptr(3,3));
    return 0;
}
