//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
    int arr[10];
    int *p=arr;//int *p;p=arr就是正确的，但是int*p;*p=arr就是错误的
    int i,j,temp;

    for(i=0;i<10;i++){
        scanf("%d",p+i);//表示的是第i个元素，是在arr里面的第几个元素
    }

    for(i=0;i<10-1;i++){//10-1 表示10个数但是只进行9轮的比较
        for(j=0;j<10-1;j++){
            if(*(p+j)>*(p+j+1)){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }

     for(i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
     return 0;
}













   
