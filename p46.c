#include<stdio.h>
#include <windows.h>
int main()
{
    int a,i,j,k;
    int count=0;
    scanf("%d",&a);
    /*a=2;*/
    i=a;
    while(i<=a+3)
    {
        j=a;
        while(j<=a+3)
        {
            k=a;
            while(k<=a+3)
            {
                if(i!=j&&i!=k&&j!=k)
                {
                    count++;
                    printf("%d%d%d",i,j,k);
                    if(count==6)
                    {
                        printf("\n");
                        count=0;
                    }else{
                        printf(" ");
                    }
                }
        k++;}
    j++;}
i++;}
system("pause");
return 0;
}