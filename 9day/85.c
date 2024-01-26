#include<stdio.h>
int main()
{
    char ac[]={0,1,2,3,4,5,6,7,8,9,};
    char *p=ac;
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);//指针运算
    char *p1=&ac[5];
    printf("p1-p=%d\n",p1-p);//两个指针相减
        printf("p1-p=%p\n",p1-p);//两个指针相减

    int ai[]={0,1,2,3,4,5,6,7,8,9,};
    int *q=ai;
    int *q1=&ai[6];
        printf("q1-q=%d\n",q1-q);//两个指针相减
                printf("q1-q=%p\n",q1-q);//两个指针相减

    printf("q=%p\n",q);
    printf("q+1=%p\n",q+1);
    return 0;
}