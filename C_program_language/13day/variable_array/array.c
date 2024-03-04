#include<stdio.h>
#include<stdlib.h>
#include"array.h"
const BLOCK_SIZE=20;//数组一次生长20个
Array array_create(int init_size)
{
    Array a;
    a.array=(int*)malloc(sizeof(int)*init_size);
    a.size=init_size;
    return a;
}
void array_free(Array *a)
{
    free(a->array);
    a->array=NULL;
    a->size=0;
}
int array_size(const Array *a)
{
    return a->size;//封装
}
int *array_at(Array *a,int index)
{
    return &(a->array[index]);
}
void array_inflate(Array *a,int more_size)
{
    int *p=(int*)malloc(sizeof(int)(a->size+more_size));
    int i;
    for(i=0;i<a->size;i++)
    {
        p[i]=a->array[i];
    }
    free(a->array);
    a->array=p;
    a->size+=more_size;

}
int main()
{
    Array a=array_create(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0)=10;
    printf("%d\n",*array_at(&a,0));
    array_free(&a);
    return 0;
}