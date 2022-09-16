/*This program can check if the area of the triangle is greater than the perimeter of the triangle.
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float side_1,side_2,base,height;

printf("Please enter the first side of the triangle = ");
scanf("%f",&side_1);
printf("Please enter the second side of the triangle = ");
scanf("%f",&side_2);
printf("Please enter the base of the triangle = ");
scanf("%f",&base);
printf("Please enter height of the triangle = ");
scanf("%f",&height);

if(0.5*base*height>side_1+side_2+base){
    printf("The area of the triangle is greater than the perimeter of the triangle");
}else{
printf("The area of the triangle is not greater than the perimeter of the triangle");
}
return 100;
}
