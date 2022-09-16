/*This program calculates the area & perimeter of a rectangle, and the area & circumference of a circle
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float lenght,breadth,radius,pi=3.14159265;

    printf("Please enter the lenght of the rectangle = ");
    scanf("%f",&lenght);

    printf("Please enter the breadth of the rectangle = ");
    scanf("%f",&breadth);

    printf("Please enter the radius of the circle = ");
    scanf("%f",&radius);

    printf("Area of the rectangle = %.2f",lenght*breadth);
    printf("\nPerimeter of the rectangle = %.2f",2*(lenght+breadth));
    printf("\nArea of the circle = %.2f",(radius*radius)*pi);
    printf("\nCircumference of the circle = %.2f",2*pi*radius);
    return 100;
}
