#include<stdio.h>
#include<windows.h>
int main()
{
    int x;
    int cnt;
    double sum=0;
    int number[100];//定义一个整型数组
    scanf("%d",&x);
    while(x!=-1)
    {
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0)
    {
        printf("%f\n",sum/cnt);
        int i;
        for(i=0;i<cnt;i++)
        {
            if(number[i]>sum/cnt)
            {
                printf("%d\n",number[i]);
            }
        }
    }
    
    //system("puase");
    return 0;
}
