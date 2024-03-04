//解法1：在输入函数中，创建一个临时的结构变量，用来复制主函数（main）中定义的结构体，改完临时结构体在返回赋值给main函数的结构体
#include<stdio.h>
struct point
{
    int x;
    int y;/* data */
};
struct point getStruct(void);//定义一个返回结构类型的函数体
void output(struct point);
void main(int argc,char const *argv[])
{
    struct point y={0,0};
    printf("原结构体内容->%d,%d",y.x,y.y);
    y=getStruct();
    output(y);
    return 0;
}
struct point getStruct(void)
{
    struct point p;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    printf("%d,%d\n",p.x,p.y);
    return p;
}
void output(struct point p)
{
    printf("%d %d\n",p.x,p.y);
}