#include<stdio.h>
#include<windows.h>
void sum(int begin,int end)
{
    int i;
    int sum=0;
    for(i=begin;i<end;i++)
    {
        sum+=i;
    }
        printf("%d到%d之间的和是%d\n",begin,end,sum);
    

}
int main()
{
    sum(10,20);
    sum(20,30);
    return 0;
}