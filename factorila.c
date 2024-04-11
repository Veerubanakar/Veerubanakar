#include<stdio.h>
int main()
{
    int n,fact=1,factorial;
    printf("Enter value of n: ");
    scanf("%d ",&n);
    while(n>=1)
    {
	factorial=fact * n;
	n--;
	printf("factorial is =%d\n",factorial);
    }
    return 0;
}
