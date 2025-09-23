#include<stdio.h>
void main(){
    int r,x,y,s;
    float a,p;
    printf("Enter radius of circle : ");
    scanf("%d",&r);
    a=3.141*r*r;
    p=2*3.141*r;
    printf("Area of Circle = %f \n",a);
    printf("Perimeter of Circle = %f \n",p);
    printf("Enter side of square : ");
    scanf("%d",&s);
    a=s*s;
    p=4*s;
    printf("Area of Square = %f \n",a);
    printf("Perimeter of Square = %f \n",p);
    printf("Enter lenght and width of rectangle : ");
    scanf("%d%d",&x,&y);
    a=x*y;
    p=2*(x+y);
    printf("Area of rectangle = %f \n",a);
    printf("Perimeter of rectangle = %f \n",p);
}