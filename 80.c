/*取址运算&的测试应用*/
#include<stdio.h>
int main()
{
    int i;
    int p;
    p=(int)&i;
    printf("0x%x\n",&p);
    printf("%p\n",&i);
    return 0;
}