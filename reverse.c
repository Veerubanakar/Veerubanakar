#include<stdio.h>
#define swap(ch) ((ch&0x0F)<<4 | (ch&0xF0)>>4)

int main()
{
    char ch=0x27;
    printf("Before swapping,ch=%#hhx\n",ch);
    printf("After swapping,ch=%hhx\n",swap(ch));
    return 0;
}
