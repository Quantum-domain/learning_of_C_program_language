//文件输入输出
#include<stdio.h>
int main()
{
    FILE *fp=fopen("p114.c","r");
    if (fp)
    {
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);       /* code */
    }else
    {
        printf("无法打开文件");/* code */
    }
    return 0;
}