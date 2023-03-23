#include <stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int sum=a+b;//we can remove this line
    printf("sum is %d",sum);//we can replace sum with a+b,ther is no need of introducing the sum variable
     return 0;
 
}