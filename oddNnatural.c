#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter value of N: ");
    scanf("%d ",&N);
    for(i=1;i<=N;i++)
    {
	printf("%d\n",2*i-1);
    }
    return 0;
}
