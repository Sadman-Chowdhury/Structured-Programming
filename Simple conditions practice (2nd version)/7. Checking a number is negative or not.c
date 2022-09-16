/*This program determines whether a number is negative or not
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float number;

printf("Please enter a number = ");
scanf("%f",&number);

if(number<0){
    printf("This number is negative");
}else{
printf("This number is not negative");
}
return 100;
}
