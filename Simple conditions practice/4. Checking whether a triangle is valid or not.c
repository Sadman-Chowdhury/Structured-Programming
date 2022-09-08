/*This program can check whether a triangle is valid or not
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float angle_1;
float angle_2;
float angle_3;
float sum_angles;

printf("Please enter the first angle of a triangle = ");
scanf("%f",&angle_1);
printf("Please enter the second angle of a triangle = ");
scanf("%f",&angle_2);
printf("Please enter the third angle of a triangle = ");
scanf("%f",&angle_3);

sum_angles=angle_1+angle_2+angle_3;

if(sum_angles==180){
    printf("The triangle is valid");
}else{
printf("The triangle is not valid");
}
return 100;
}
