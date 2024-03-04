//错误的修改结构体内容方法
#include<stdio.h>
struct point
{
    int x;
    int y;/* data */
};
void getStruct(struct point);
void output(struct point);
int main()
{
    struct point y={0,0};
    getStruct(y);
    output(y);
    return 0;
}
void getStruct(struct point p)
{
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    printf("%d %d\n",p.x,p.y);
}
void output(struct point p)
{
    printf("%d %d\n",p.x,p.y);
}