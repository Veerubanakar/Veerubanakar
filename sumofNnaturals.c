#include<stdio.h>
int main()
{
    int N,sum=0;
    printf("Ener a number N: ");
    scanf("%d ",&N);
    for(int i=0;i<=N;i++)
    {
	printf("sum = %d",sum + i);
    }
    return 0;
}
