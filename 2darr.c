#include<stdio.h>
int main()
{
    int arr[][3]={1,2,3};
    int i,j;
    for(i=0;i<1;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d\n",arr[i][j]);
	}
	printf("\n");
    }
}
