#include<stdio.h>
int main()
{
    char *s="hello world";
    char s1[]="hello,world";
    /*s[0]='b';*/
    s1[0]='b';
        printf("s[0]=%c\n",s1[0]);

    printf("指针s的值为%p\n",s);
        printf("s[]的值为%p\n",s1);
    printf("here!s=%c\n",s1[0]);
    return 0;
}