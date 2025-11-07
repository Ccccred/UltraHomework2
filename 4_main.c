//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int power(int a,int b){
    int result=1;
    for(int i=0;i<b;i++){
        result*=a;
    }
    return result;
}
int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=power(i,2);
    }

    printf("%d\n",sum);
return 0;
}
