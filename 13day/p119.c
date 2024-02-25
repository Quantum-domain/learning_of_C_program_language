//位运算例子
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    unsigned mask=1u<<31;
    for (;mask;mask>>=1)
    {
       printf("%d",num&mask?1:0); /* code */
       return 0;
    }
    
}