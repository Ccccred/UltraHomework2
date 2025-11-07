//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int i=0,j=0;
int arr[10];
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<10-1;i++){//有10个数字，但是只用进行9轮的比较,不要直接用9，而是用10-1去表示9
    for(j=0;j<9-i;j++){//表示每轮要比较的次数
        if(arr[j]>arr[j+1]){//要交换变量，就要引入中间变量
            int a=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=a;
            /* 与上面的是等价表示
             int a=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=a; */
        }
    }
}

for(i=0;i<10;i++){
    if(i==0){//表示第一个数字
        printf("%d",arr[i]);
    }
    else{
        printf(" %d",arr[i]);
    }
}
return 0;
}
