//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
void increment(int *ptr,int size){
    for(int i=0;i<size;i++){
       (*ptr)++;//*ptr=*ptr+1,表示在指针变量对应的数字上加一，但是指针的位置不变。返回的是改变前的值
        ptr++;
    }
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    increment(arr,5);
    for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
