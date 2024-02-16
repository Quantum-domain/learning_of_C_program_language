//带参数的宏
#include<stdio.h>
#define cube(x) ((x)*(x)*(x))
int main(int argc,char const *argv[])
{
    int i;
    scanf("%d",&i);
    printf("%d\n",cube(i));
    printf("%d\n",cube(5));
    return 0;
}