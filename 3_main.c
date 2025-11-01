//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int num=1,m=1,b=2;//n表示密码,这里要默认m=1,在后面的做判断的时候才是m==1
printf("请输入你的密码(50以内的整数)：");
scanf("%d",&num);
//1不是质数
if(num==1){
    m=0;
}
else{
    while(b<num){
   if (num % b==0){
    m=0;
    break;//当其中有一个满足后就要退出循环，用break
   }
   b++;
 }
}
if(m==0)
    { printf("密码不安全，请重新输入");}
    else
    {printf("密码安全，密码设置成功");}
return 0;
}
