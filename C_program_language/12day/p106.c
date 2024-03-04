//全局变量
#include<stdio.h>
int f(void);
int gALL=12;//定义全局变量gALL
int main(int argc,char const *argv[])
{
    printf("in %s gALL=%d\n",__func__,gALL);//c预定义宏
    f();
    printf("agn in %s gALL=%d\n",__func__,gALL);
    return 0;
}
int f(void)
{
      printf("in %s gALL=%d\n",__func__,gALL);
        gALL+=2;
    printf("agn in %s gALL=%d\n",__func__,gALL);
  return gALL;
}
