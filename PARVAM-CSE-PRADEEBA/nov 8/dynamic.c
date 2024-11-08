#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *dynamic=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&dynamic[i]);
    }

}