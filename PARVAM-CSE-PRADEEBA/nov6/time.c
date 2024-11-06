#include<stdio.h>
int main(){
    int n=10;
    for(int i=1;i<=n;i+=2){
        printf("%d",i);
    }
}
// // constant time -O(1)
// int main(){
//     printf("hello");
//     printf("world");
// }
// linear time - O(n)
//  int n=5;
//     for(int i=0;i<n;i++){
//         printf("%d",i);
//     }
// quadratic time -O(n^2)
// int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d %d",i,j);
//         }
//     }
// cubic time - O(n^3)
// int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 printf("%d %d %d",i,j,k);
//             }
//         }
//     }
// lograthmic time - O(log n)
// int n=10;
//     for(int i=1;i<=n;i+=2){
//         printf("%d",i);
//     }
