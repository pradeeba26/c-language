#include<stdio.h>
int main(){
    //runtime input
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    //compile time
    // int arr[][3]={{1,2,3},{4,5,6},{6,7,8}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
     // printf("%d",arr[0][0]);
    // printf("%d",arr[0][1]);
    // printf("%d",arr[0][2]);


}