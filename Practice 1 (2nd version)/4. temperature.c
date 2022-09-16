/* This program converts the temperature Fahrenheit degrees to Centigrade degrees
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float fahrenheit;

    printf("Please enter the temperature of the city in Fahrenheit degree = ");
    scanf("%f",&fahrenheit);

    printf("Temperature of the city in Centigrade degree = %.2f",(fahrenheit-32)*0.555555556);

    return 100;
}
