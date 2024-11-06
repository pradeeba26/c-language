#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    int income;
    scanf("%d",&income);
    if(age>=18){
        if((age>=18 && age<=25) && income>=5000){
            printf("eligible");
        }
    }
    else{
        printf("not eligible");
    }
}