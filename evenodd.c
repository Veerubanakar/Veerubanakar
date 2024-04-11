#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d ",&n);
    if(n % 2 == 0)
	printf("Entered number is even:%d",n);
    else
	printf("Enterred number is odd:%d",n);
    return 0;
}
