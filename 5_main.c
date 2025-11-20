//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
void shift(int *ptr_arr,int len){
    for(int i=len -1;i>0;i--){
       ptr_arr[i]=ptr_arr[i-1];
    }
    ptr_arr[0]=0;
}
int main(){
    int arr[5];
    int len=5;
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    shift(arr,5);
    for(int i=0;i<len;i++){
    printf("%d ",arr[i]);
}
return 0;

}
