/*给定一个范围，统计里面的素数个数并求和*/
#include<stdio.h>
#include<windows.h>
int main()
{
    int m,n,i;
    int count=0;
    int sum=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        int k;
        int isPrime=1;
        for(k=2;k<i-1;k++)
        {
            if(i%k==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            count++;
            sum++;
        }
    }
    printf("%d %d\n",count,sum);
    system("puase");
    return 0;
}