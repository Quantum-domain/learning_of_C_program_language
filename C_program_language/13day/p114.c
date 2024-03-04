//格式化输入输出
#include<stdio.h>
int main()
{
    printf("%9d\n",123);
    printf("%-9d\n",123);
    printf("%9.2f\n",123.0);
    printf("%hhd\n",(char)12345);
    //printf和scanf的返回值
    int num;
    int i1=scanf("%i",&num);
    int i2=printf("%d\n",num);
    printf("%d:%d\n",i1,i2);
    return 0;
}