#include<stdio.h>
int isConsecutive(int n,int arr[]){
    // 6 1 3 7 8
    for(int i=0;i<n-2;i++){
        if((arr[i]%2!=0)&& (arr[i+1]%2!=0) && (arr[i+2]%2!=0)){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",isConsecutive(n,arr));
    
}