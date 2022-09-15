/*This program will take a number as an input and can decide whether the number is positive, negative or neutral
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float number;

printf("Please enter a number = ");
scanf("%f",&number);

if(number>0){
    printf("%f is positive",number);
}else if(number<0){
printf("%f is negative",number);
}else{
printf("%f is neutral",number);
}

return 100;
}
