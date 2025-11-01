//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int arr[5];
int sum=0,i=0;
printf("请输入4个数字：");
while(i<4){
    scanf("%d",&arr[i]);
    sum+=arr[i];//等价于sum=sum+arr[i]
    i++;
}
arr[4]=sum;//赋值
for(i=0;i<=4;i++){
    if(i==4){
    printf("%d",sum);
    }
    else{
        printf("%d ",arr[i]);
    }
}
return 0;
}

