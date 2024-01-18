/*strcmp函数
·比较两个字符串，返回：
·0：s1==s2
·1：s1>s2
·-1:s1<s2
*/
#include<stdio.h>
#include<string.h>
int mycmp(const char *s1,const char *s2)
{
    /*常规写法*/
    /*int idx=0;
    while(s1[idx]==s2[idx]&&s1[idx]!='\0')
    {
        idx++;
    }*/
    //指针写法
    while(*s1==*s2&&*s1!='\0')
    {
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int main(int argc,char const *argv[])
{
    char s1[]="abc";
    char s2[]="abc ";
    printf("%d\n",strcmp(s1,s2));
        printf("%d",'A-a');

    return 0;
}