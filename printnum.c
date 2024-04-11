#include<stdio.h>
int main()
{
    int num=10,i;
    for(i=31;i>=0;i--)
    {
	(num&(1<<i))?putchar('1'):putchar('0');
    }
    return 0;
}
