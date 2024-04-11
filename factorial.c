#include<stdio.h>
int factorial(int);
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
       return fact=fact*i;
    }
}
int main()
{
    int i,num;
    
    printf("Enter a number\n");
    scanf("%d",&num);
   /* int fact=1;
    for(i=1;i<=num;i++)
    {
	fact=fact*i;
    } */
    int fact;
    printf("Factorial of number=%d\n",fact);
    return 0;
}

