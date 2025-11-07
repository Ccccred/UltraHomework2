//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int calculateSum(int arr[],int length){
    int sum=0;
    for(int i=0;i<length;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int calculateProduct(int arr[],int length){
    int product=1;
    for(int i=0;i<length;i++){
        product=product*arr[i];
    }
    return product;
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }                           
    int sum=calculateSum(arr,5);//这里不能写成arr[i],这个表示第几个元素，而这里要的是找到数组的首地址在哪里
    int product=calculateProduct(arr,5);
    printf("%d %d",sum,product); 
    return 0;
}
