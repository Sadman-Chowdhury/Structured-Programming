/*This program can check whether a triangle is valid or not
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float angle_1,angle_2,angle_3;

printf("Please enter the first angle of a triangle = ");
scanf("%f",&angle_1);
printf("Please enter the second angle of a triangle = ");
scanf("%f",&angle_2);
printf("Please enter the third angle of a triangle = ");
scanf("%f",&angle_3);

if(angle_1+angle_2+angle_3==180){
    printf("The triangle is valid");
}else{
printf("The triangle is not valid");
}
return 100;
}
