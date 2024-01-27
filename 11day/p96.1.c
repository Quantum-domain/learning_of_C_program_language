/*枚举*/
#include<stdio.h>
enum COLOR {RED=1,YELLOW,GREEN=5};
int main(int argc,char const *argv[])
{
    enum COLOR color=0;     /*即使给枚举类型的变量赋不存在的整数值也不会警告或error*/

    printf("code for GREEN is %d\n",GREEN);
        printf("and colors is %d\n",color);
    return 0;
}
