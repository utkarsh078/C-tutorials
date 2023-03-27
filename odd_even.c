#include<stdio.h>
int main(){
    int x;
    printf("enter number");
    scanf("%d",&x);
    printf("even %d",x%2==0);
    printf("odd %d",x%2!=0);
}