#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter value of N: ");
    scanf("%d ",&N);
    for(i=N;i>=1;i--)
    {
	printf("%d\n",2*i);
    }
    return 0;
}
