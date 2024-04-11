#include<stdio.h>
struct student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct student s1={.id=10, .name="viru", .address="ka"};
    struct student s2={.id=20, .name="div", .address="bang"};
    printf("s1.id=%d\n",s1.id);
    printf("s2.id=%d\n",s2.id);
    printf("s1.name=%s\n",s1.name);
    printf("s2.name=%s\n",s2.name);
    printf("s1.address=%s\n",s1.address);
    printf("s2.address=%s\n",s2.address);
    return 0;
}
