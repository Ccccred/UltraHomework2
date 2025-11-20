//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
    int a;
    int *p;//要地址用p,要值用*p
    scanf("%d",&a);
    p = &a;//这里不是a，而是&a
    *p =*p+10;
    printf("%d,%d",a,*p);
    return 0;
}
