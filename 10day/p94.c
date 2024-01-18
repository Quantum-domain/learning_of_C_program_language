#include<stdio.h>
#include<string.h>
/*返回的是字符串，所以用char类型*/char *mycopy(char *dst,const char *src)
{
    //数组写法
    /*int idx=0;
    while(src[idx])
    {
    dst[idx]=src[idx];
    idx++;
    }
    dst[idx]='\0';*/
    //指针写法
    char *ret=dst;
    while(*dst++=*src++);
    *dst='\0';
    return ret;//返回指针最初指向的地址，也就是数组名
}
int main(int argc,const char *argv[])
{
    char s1[]="abc";
    char s2[]="abcd";
    //strcpy(s1,s2);//strcpy函数
    int i;
    //for(i=0;i<=3;i++)
   // {
    printf("%s\n",mycopy(s2,s1));
//}
    return 0;
}