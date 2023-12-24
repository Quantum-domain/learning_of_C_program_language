#include<stdio.h>
#include<windows.h>
int main()
{
    unsigned int a=0,b=0;
    while(a>0){
        a++;
    }
    ;
    printf("int数据类型的最大范围是：%u\n",a-1);
    b++;
    while((a=a/10)!=0)
    {
        b++;
    }
    printf("int数据类型最大的数位是：%d",b);
    system("puase");
    return 0;
}
