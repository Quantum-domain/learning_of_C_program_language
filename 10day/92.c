/*字符串函数strlen：能计算字符串单位长度。mylen函数是对strlen的仿写*/
#include<stdio.h>
#include<string.h>
size_t mylen(const char *s)
{
    int idx=0;
    while(s[idx]!='\0')
    {
        idx++;
    }
    return idx;
}
int main(int argc,char const *argv[])
{
    char line[]="hello";
    printf("mylen=%lu\n",mylen(line));
    printf("sizeof=%lu\n",sizeof(line));
    printf("strlen=%lu\n",strlen(line));
    return 0;
}