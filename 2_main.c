//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
int main(){
int arr[3][3];
int i=0,j=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(j==0){//只能是列j，而不能是行i
        printf("%d",arr[j][i]);}
        else
        {printf(" %d",arr[j][i]);}
    }
    printf("\n");
}
return 0;
}
