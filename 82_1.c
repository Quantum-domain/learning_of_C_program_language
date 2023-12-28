/*指针的使用场景2
·函数返回多个值，某些值就只能通过指针返回
    ·传入的参数实际上是需要保存带回来的结果的变量*/
void minmax(int a[],int len,int *max,int *min)
{
    int i;
    *min=*max=a[0];
    for(i=1;i<len;i++)
    {
        if(a[i]<*min)
        {
            *min=a[i];/*直接通过指针改变main中max和min变量的值，这和上一节的*P=26一样原理，所以不用让函数返回值，更加方便*/
        }
        if(a[i]>*max)
        {
            *max=a[i];
        }
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,};
    int max,min;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);//sizeof(a)/sizeof(a[0])
    printf("min=%d,max=%d\n",min,max);
    return 0;
}