//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int num=100;
int m=0;//用于标记是否为第一个数
while(num<1000){
    int a=num/100;
    int b=(num/10)%10;
    int c=num%10;
    if(num==a*a*a+b*b*b+c*c*c){
        if(m==0){
            printf("%d",num);
            m=1;//标志以后的数都不是第一个数了
        }
        else{
            printf(" %d",num);
        }
    }
    num++;//这个循环是while的，而不是if的，注意n++的是谁的循环
}
return 0;
}
