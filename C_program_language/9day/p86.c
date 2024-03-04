#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p;
    int cnt=0;
    while((p=malloc(100*1024*1024)))//若malloc申请失败，则返回0，或者叫NULL
    {
        cnt++;
    }
    printf("分配了%d00MB的空间\n",cnt);
    //p++;只能释放申请来的空间的首地址（只能释放原来的地址，地址变化了之后则不行）
    free(p);
    return 0;
}