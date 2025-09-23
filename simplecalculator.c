#include<stdio.h> 
void main(){
    int a,b,sum,sub,mul;
    float div;
    printf("Enter 1st no :");
    scanf("%d",&a);
    printf("Enter 2st no :");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Sum = %d",sum);
    printf("Subtraction = %d",sub);
    printf("Multiply = %d",mul);
    printf("Divison = %f",div);
}