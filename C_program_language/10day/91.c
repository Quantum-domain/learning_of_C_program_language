/*该程序主要说明put(get)char输出or输入单个字符，以及键盘和执行的程序之间有一个缓存区存放键盘键入的字符，
在按下换行键后才进入程序中被读取，详细信息
<https://www.bilibili.com/video/BV1XZ4y1S7e1?p=91&vd_source=80fab565769d460162486f0d7370a8f7>*/
#include<stdio.h>
/*非循环下*/
int main(int argc,char const *argv[])
{
    int ch;
    ch=getchar();
   // while((ch=getchar())!=EOF)
    //{
        putchar(ch);
        //printf("ch=%d\n",ch);
    //}
    printf("EOF\n");
    return 0;
}
/*循环下*/
/*int main(int argc,char const *argv[])
{
    int ch;
    ch=getchar();
    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
    printf("EOF\n");
    return 0;
}*/
