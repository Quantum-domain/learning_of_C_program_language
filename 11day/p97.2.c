//结构体的运算
#include<stdio.h>
//声明一个全局结构体date
struct date
{
    int month;
    int day;
    int year; /* data */
};
int main(int argc,char const *argv[])
{
    struct date today;
    today=(struct date){07,31,2014};//(struct date)不能去掉，要强制类型转换，也可以在定义的时候初始化赋值，就可以不用强制类型转换
    struct date day;
    day=today;
    struct date *pDate=&today;//因为结构体变量名不是结构变量的地址，所以要加&号
        printf("Today`s date is %i-%i-%i.\n",today.year,today.month,today.day);
        printf("thismonth date is %i-%i-%i.\n",day.year,day.month,day.day);
        printf("thismonth date is %p.\n",*pDate);
    return 0;
}