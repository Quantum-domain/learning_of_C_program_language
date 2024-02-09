//解法2：结构指针作为参数
#include<stdio.h>
struct point
{
    int x;
    int y;/* data */
};
struct point *getStruct(struct point*);//定义一个返回结构体指针的函数体
void output(struct point);
void print(const struct point *p);
void main(int argc,char const *argv[])
{
    struct point y={0,0};
    printf("原结构体内容->%d,%d\n",y.x,y.y);
    getStruct(&y);
    output(y);    
    output(*getStruct(&y));/*解析返回值：改指针的值是结构体地址，getStruct函数返回地址,*号取地址值，
    得到结构体y，传给output函数*/
    print(getStruct(&y));
    return 0;
}
struct point *getStruct(struct point *p)
{
    scanf("%d",&p->x);
    scanf("%d",&p->y);
    printf("%d,%d\n",p->x,p->y);
    return p;
}
void output(struct point p)
{
    printf("%d %d\n",p.x,p.y);
}
print(const struct point *p)
{
    printf("%d,%d\n",p->x,p->y);
}