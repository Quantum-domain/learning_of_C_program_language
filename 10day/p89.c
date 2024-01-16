/*scanf函数读入字符串结束在空格、tab、回车*/
#include<stdio.h>
int main()
{
    char string[20];
    char string1[20];//不给数字类型就不完整
    scanf("%s",string);//输入hello加空格再输入world，后面只输出hello##，证明scanf读入字符串只到空格、tab、回车
    printf("%s##",string);//
    return 0;
}