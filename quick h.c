/*快速排序算法函数*/
void quick_sort(int arry[],int left,int right);
{
    int i=left,j=right;
    int temp;//交换变量
    int pivot;//基准点piovt
    pivot=array[(left+right)/2];
        while(i<=j)
        {
            while(array[i]<pivot)
            {
                i++;
            }
            while(array[j]>pivot)
            {
                j--;
            }
            if(i<=j)
            {
                temp=array[i]
                array[i]=array[j];
                array[j]=temp;
            }
            i++;
            j--;
        }
        if(left<j)
        {
            quick_sort(array,left,j);
        }
        if(i<right)
        {
            quick_sort(array,i,right)
        }
}