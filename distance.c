#include<stdio.h>
#include<math.h>
void main(){
    float x1,x2,y1,y2,x;
    double Distance;
    printf("Enter first coordinate(x1,y1) : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter second coordinate(x2,y2) : ");
    scanf("%f%f",&x2,&y2);
    x=pow((x2-x1),2)+pow((y2-y1),2);
    Distance=sqrt(x);
    printf("Distance btw Coordinates = %f",Distance);    
}