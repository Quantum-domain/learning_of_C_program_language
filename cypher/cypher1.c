#include<stdio.h>
#define SPACE ' '
int main(int argc,const char *argv[])
{
    char ch;
    ch=getchar();
    while (ch!='\n')
    {
        if (ch==SPACE)
            putchar(ch);/* code */
        /* code */
        else
        
        putchar(ch+1);
        ch=getchar();    /* code */
    }
    putchar(ch);
    return 0;
}