#include<stdio.h>
int main()
{
    int a=5,b=4,temp;
    printf("Before swapping a and b ");
   // scanf("%d,%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
}
