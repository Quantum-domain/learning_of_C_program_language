//静态本地变量实际上是特殊的全局变量
#include<stdio.h>
int gALL=12;
int main()
{
    f();
    return 0;
}
int f(void)
{
    int k=0;
    static int all=1;
    printf("&gALL=%p\n",&gALL);
    printf("&all=%p\n",&all);
    printf("&k=%p\n",&k);
}