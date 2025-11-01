//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int arr[5];//学号一共是5个数组
int i=0;//编号从零开始
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
//一定要用i--
for(i=4;i>=0;i--){
    arr[i]=arr[i-1];
}
//arr[0]=0;
for(i=0;i<5;i++){
    if(i==0){
        printf("0");
    }
    else{
        printf(" %d",arr[i]);
    }
}
return 0;
}
