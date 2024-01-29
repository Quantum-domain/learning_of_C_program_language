#include<stdio.h>
#include<stdbool.h>
struct date
{
   int month;
   int day;
   int year; /* data */
};
bool isLeap(struct date d);
int numberOfDays(struct date d);
int main()
{
    struct date today,tomrrow;
    printf("Enter today`s date( 月 天 年):");
    scanf("%i %i %i",&today.month,&today.day,&today.year);//.的优先级要高于&
    if(today.day!=numberOfDays(today))
    {
        tomrrow.day=today.day+1;
        tomrrow.month=today.month;
        tomrrow.year=today.year;
    }else if(today.month==12)
    {
        tomrrow.day=1;
        tomrrow.month=1;
        tomrrow.year=today.year+1;
    }else
    {
       tomrrow.day=1;
       tomrrow.month=1;
       tomrrow.year=today.year; /* code */
    }
    printf("Tomrrow`s date is %i-%i-%i.\n",tomrrow.year,tomrrow.month,tomrrow.day);
}
int numberOfDays(struct date d)
{
    int days;
    const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month==2&&isLeap(d))
    {
        days=29;/* code */
    }else
    {
        days=daysPerMonth[d.month-1];/* code */
    }
    return days;
}
bool isLeap(struct date d)
{
    bool leap=false;
    if((d.year%4!=0&&d.year%100!=0)||d.year%400==0)
    leap=true;
    return leap;
}
