/*strchr函数应用*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char const *argv[])
{
    char s[]="hello";
    char *p=strchr(s,'l');//strchr的基本操作
    //p=strchr(p+1,'l');//输出"lo",因为p+1，地址向后移动了
    //printf("%s\n",p);
    
    /*char *t=(char*)malloc(strlen(p)+1);动态分配内存。分配和p相等的内存
    strcpy(t,p);//将p得到的字符串拷贝给t*/
    //如何取"l"前面的"he"，在strchr的基本操作后面接如下代码
    char c=*p;//原理：为了后面方便恢复数组s的字符串
    *p='\0';//p存的是s[2]的地址，*p目的是把s[2]的单元值改成\0,因为\0是字符串结束字符，所以he以后的字符将被断开
    //加上后面代码的作用就能得到he
    char *t=(char *)malloc(strlen(s)+1);
    strcpy(t,s);
    printf("%s\n",t);
    free(t);
    return 0;
}