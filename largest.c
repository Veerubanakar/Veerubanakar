#include<stdio.h>
void find(int *arr,int size);
int main()
{
    int arr[]={10,20,30,50,40};
    find(arr,5);
    return 0;
}
void find(int *arr,int size)
{
    int i,largest=*arr,smallest=*arr;
    for(i=0;i<size;i++)
    {
	if(*arr>largest)
	    largest=*arr;
	if(*arr<smallest)
	    smallest=*arr;
	arr++;
    }
    printf("Largest element=%d\n",largest);
    printf("Smallest element=%d\n",smallest);
}
