//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
    int arr[5];
    int *p;
    int i;//这里用整体变量，因为有好几个for循环中都要用到i
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    p=arr;//这里不是&arr，而直接是arr
          //arr表示的是地址，arr就是一个指针，*arr代表的是具体的某一个值

    for(i=0;i<5;i++){
        *p=*p*2;
        p++;//表示循环
    }

    for(i=0;i<5;i++){
        if(i==0){
             printf("%d",arr[i]);
        }
        else{
        printf(" %d",arr[i]);
    }
}
    return 0;
}
