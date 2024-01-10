/**p++的应用*/
#include<stdio.h>
int main()
{
    char ac[]={0,1,2,3,4,5,6,7,8,9,-1,};
    char *p=&ac[0];
    int i;
    for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++)
    {
        printf("%d\n",ac[i]);//变量自增写法
    }
    while(*p!=-1)
    {
        printf("%d\n",*p++);
    }
    for(p=ac;*p!=-1;*p++)
    {
        printf("%d\n",*p);//此处p指向ac首地址，数组即指针
    }
    return 0;
}