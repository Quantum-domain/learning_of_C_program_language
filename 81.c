/*指针应用*/
#include<stdio.h>
void f(int *p);
void g(int k);
int main()
{
    int i=6;
    printf("&i=%p\n",&i);
    f(&i);
    g(i);
    return 0;
}
void f(int *p)
{
    int k=*p;
    printf("k=%d\n",k);
        printf("p=%p\n",p);

    printf("p=%p\n",&p);
    *p=26;/*这样就能够在局部函数中改变main函数中i的值了*/
    }
void g(int k)
{
    printf("i=%d\n",k);
}