#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num & (num-1) == 0)
    {
	printf("%d is not a power of 2n\n",num);
    }
    else
    {
	printf("%d is a power of 2n\n",num);
    }
    return 0;
}
