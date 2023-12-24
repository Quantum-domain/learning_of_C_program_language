#include<stdio.h>
#include<windows.h>
int main()
{
    int a=1;
    if(a>0&&a++>1){
    printf("ok\n");
    }
    printf("%d\n",a);
    return 0;
}