/*枚举*/
#include<stdio.h>
enum COLOR {RED,YELLOW,GREEN};
void f(enum COLOR c);
int main()
{
    enum COLOR t=RED;
    scanf("%d",&t);
    f(t);
    return 0;
}
void f(enum COLOR c)
{
    printf("%d\n",c);
}