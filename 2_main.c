//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int num;
int m=0;
int a,b,c;
for(num = 100;num < 1000; num++)
{
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    if(num==a*a*a+b*b*b+c*c*c)
    {
      if(m==0){
        printf("%d",num);
        m=1;
      }
      else{
        printf(" %d",num);
      }
    }
}
return 0;
}
