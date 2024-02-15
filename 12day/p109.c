//宏定义
//如果宏的值超过一行，最后一行之前的行末需要加/*'\'*/
#include<stdio.h>
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI//如果一个宏的值中有其他的宏的名字，也是会被替换的
#define PRT printf("%f\n",PI);\
            printf("%f\n",PI2)
int main(int argc,char const *argv[])
{
    printf(FORMAT,PI2*3.0);
    printf(FORMAT,3.14159*3.0*2);
    PRT;
    return 0;
}