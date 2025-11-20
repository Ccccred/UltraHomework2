//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
#include<stdlib.h>//表示申请一个储存空间

int main(){
    int *p;
    int i;
    p=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",p[i]);
    }

    free(p);//表示释放内存

    return 0;
}
