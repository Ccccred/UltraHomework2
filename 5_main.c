//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int sum(int a1,int an,int step){//step表示公差
    int n=(an-a1)/step+1;//表示有多少项
    return n*(a1+an)/2;
}
int main(){
    int result=sum(1,100,1);//表示调用上面的行定义的函数
    printf("%d",result);
    return 0;
}

