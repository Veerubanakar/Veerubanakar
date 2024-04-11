#include<stdio.h>
int main()
{
    int a,b;
    printf("REnter two numbers a and b\n");
    scanf("%d %d",&a,&b);
   if(a>b)
    {
	printf("%d is greater than b\n",a);
    }
    else
    {
	printf("%d is greater than a\n",b);
    }
    return 0;
}
