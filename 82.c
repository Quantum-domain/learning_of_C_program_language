/*交换变量中的值的函数*/
#include<stdio.h>
void swap(int *pa,int *pb)
{
    int t=*pa;
    *pa=*pb;
    *pb=t;
}
int main()
{
    int a=5;
    int b=3;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0; 
}