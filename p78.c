#include<stdio.h>
int isPrimes(int x,int knownPrimes[],int numberofknowPrimes)
{
    int ret=1;
    int i;
    for(i=0;i<numberofknowPrimes;i++)
    {
        if(x%knownPrimes[i]==0)
        {
            ret=0;
            break;
        }
    }
    return 0;
}
int main()
{
    const int number=100;
    int prime[number];
    for(int i=1;i<number;i++)
    {
        prime[i]=1;
    }
    int count =1;
    int i=3;
    while(count<number){
        if(isPrimes(i,prime,count))
        {prime[count++]=i;
        }
        i++;
    }
    for(i=0;i<number;i++)
    {
        printf("%d",prime[i]);
        if((i+1)%5)
        printf("\t");
        else printf("\n");
    }
    return 0;
}