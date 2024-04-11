#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?(a>c?a:c) : (b>c?b:c);
	printf("biggest among three numbers %d %d and %d is %d",a,b,c,max);
    return 0;
}
