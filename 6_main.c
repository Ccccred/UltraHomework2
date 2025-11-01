//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int arr[5],i=0;//i表示数组中的第几个数
int n;
while(i<=4){
    scanf("%d",&n);
    while(n%2!=0){
        scanf("%d",&n);
    }
    arr[i]=n;
    i++;
}
for(i=0;i<=4;i++){
    if(i==4)
    printf("%d",arr[i]);
    else
    printf("%d ",arr[i]);
}
return 0;
}
