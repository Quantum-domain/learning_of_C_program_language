/*九九乘法表*/
#include<stdio.h>
#include<windows.h>
int main()
{
    int i,h;
    for(h=0;h<10;h++)
    {
        for(i=1;i<=h;i++)
        {
            printf("%d*%d=%d ",i,h,i*h);
            if(i==h)
            {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}