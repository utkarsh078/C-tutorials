#include<stdio.h>
int main(){
    float pi=3.14;//there is no need to define pi,we can use here as a constant
    float r;
    printf("enter r");
    scanf("%f",&r);
    scanf("%f",&r);
    printf("area of circle %f",pi*r++*r);//here pi will replace by 3.14
    return 0;

}