/*This program can check if the area of the triangle is greater than the perimeter of the triangle.
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float side_1,side_2,side_3,semi_p,area,perimeter;

printf("Please enter the first side of the triangle = ");
scanf("%f",&side_1);
printf("Please enter the second side of the triangle = ");
scanf("%f",&side_2);
printf("Please enter the third side of the triangle = ");
scanf("%f",&side_3);

semi_p=(side_1+side_2+side_3)/2;
area=sqrt(semi_p*(semi_p-side_1)*(semi_p-side_2)*(semi_p-side_3));
perimeter=side_1+side_2+side_3;

if(area>perimeter){
    printf("The area of the triangle is greater than the perimeter of the triangle");
}else{
printf("The area of the triangle is not greater than the perimeter of the triangle");
}
return 100;
}
