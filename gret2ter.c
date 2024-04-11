#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers a and b");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
	printf("biggest of two number between %d and %d is %d",a,b,max);
    return 0;
}

