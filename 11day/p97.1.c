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
    struct date today={07,31,2014};//date是结构体名     today是结构体变量名
    struct date thismonth={.month=7,.year=2014};
    printf("Today`s date is %i-%i-%i.\n",today.year,today.month,today.day);
        printf("thismonth date is %i-%i-%i.\n",thismonth.year,thismonth.month,thismonth.day);
    return 0;
}
