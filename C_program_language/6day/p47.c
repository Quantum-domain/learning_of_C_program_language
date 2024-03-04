/*水仙花数是指一个N位的正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3^3*/
#include<stdio.h>
#include<windows.h>
int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    int first=1;
    while(i<n)
    {
        first*=10;
        i++;
    }
    i=first;
    while(i<first*10)
    {
        int t;//用于承接i的变量
        t=i;
         int sum=0;
        do{
            int d=t%10;
            t/=10;
            int p=d;
            int j=1;
            while(j<n)
            {
                p*=d;
                j++;
            }
            sum+=p;
        }while(t>0);
        if(sum==i)
            {
                printf("%d\n",i);
            }
        i++;
    }
    system("pause");
    return 0;
}