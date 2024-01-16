/*#include<stdio.h>
int k=7;
void f(int **p)
{
    int *t=&k; 
    **p=&t;
}
int main()

{
    int a;
    int *i=&a;
    int **p=&i;
    printf("p的地址是%p\n",p);
    printf("i的地址是%p\n",i);
    f(p);
    printf("p的地址是%p\n",p);
    printf("i的地址是%p\n",i);
    return 0;    
}*/
#include<stdio.h>
int k=7;
void f(int **s)
{ 
    //int k=7;
    int *t=&k;
    *s=t;
printf("%d,%d,%d,",k,*t,**s);
        printf("s的地址是%p\n",s);
    printf("t的地址是%p\n",t);

}
int main()
{
    int i=3,*p=&i,**r = &p;
        printf("p的地址是%p\n",p);
    printf("r的地址是%p\n",r);

    f(r);
printf("%d,%d,%d\n", i, *p, **r);
    printf("p的地址是%p\n",p);
    printf("r的地址是%p\n",r);
    return 0;
}