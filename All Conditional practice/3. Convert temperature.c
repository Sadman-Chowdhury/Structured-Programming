/*This program can convert temperature from degree Celsius to Fahrenheit and Fahrenheit to Celsius
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int choice;
float fah, cel;

printf("Choose one option:\n1.Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
scanf("%d",&choice);

if(choice==1){
    printf("Enter the temperature in Celsius = ");
    scanf("%f",&cel);
    printf("%.2f Celsius is %.2f Fahrenheit",cel,(cel*1.8)+32);
}else if(choice==2){
    printf("Enter the temperature in Fahrenheit = ");
    scanf("%f",&fah);
    printf("%.2f Fahrenheit is %.2f Celsius",fah,(fah-32)*0.555555556);
}else{
    printf("N/A");
}
return 0;
}
