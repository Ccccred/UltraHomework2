//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int num=1,m=1;//n表示密码,m=1表示真，m=0表示假,这里一定要先默认m=1
printf("请输入你的密码(50以内的整数)：");
while(1){
    scanf("%d",& num);
    if(num>=50 || num<1){
    printf("请输入50以内的正整数：");
}
    else{
        break;
    }
}
if(num==1){
    m=0;
}
else{
    for(int b=2 ; b<num ; b++)//相除的数从2开始，而不是从1开始
    if(num % b==0)//一定要用取余
    {m=0;
    break;}
}
    
    if(m==0)
    {
        printf("密码不安全，请重新输入");
    }
    else
    {
        printf("密码安全，密码设置成功");
    }

    return 0;
}
