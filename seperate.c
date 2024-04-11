#include<stdio.h>
int main()
{
    int a=0x97877767;
    int byte1=(a>>8)&0xFFFF;
    int byte2=a&0xFFFF;
    printf("Byte 1:0x%X\n",byte1);
    printf("Byte 2:0x%X\n",byte2);
    return 0;
}
