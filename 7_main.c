//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
void reverse(int arr[],int length){
    int start=0;
    int end=length -1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;    
    }
}

int main(){
    int arr[5];
    //int length=5;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,5);
    for(int i=0;i<5;i++){
        if(i==0){
            printf("%d",arr[i]);
        }
        else{
            printf(" %d",arr[i]);
        }
    }
    return 0;
}













   
