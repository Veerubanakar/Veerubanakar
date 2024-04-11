#include<stdio.h>
int main()
{
    int i,N,prod;
    printf("Enter value of N: ");
    scanf("%d ",&N);
    for(i=1;i<=N;i++)
    {
	printf("product=%d\n",prod * i);
    }
    return 0;
}
