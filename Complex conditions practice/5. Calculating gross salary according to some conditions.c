/*This program takes basic salary of an employee as input and calculate its Gross salary according to following conditions:
 Basic Salary <= 10000 : HRA = 20%, DA = 80%
 Basic Salary <= 20000 : HRA = 25%, DA = 90%
 Basic Salary > 20000 : HRA = 30%, DA = 95%
Author: Sadman Chowdhury */
#include<stdio.h>
int main(){
float b_salary;

printf("Please enter your basic salary = ");
scanf("%f",&b_salary);

if(b_salary<=10000){
    printf("Your gross salary is = %.2f",0.2*b_salary+0.8*b_salary+b_salary);
}else if(b_salary<=20000){
printf("Your gross salary is = %.2f",0.25*b_salary+0.9*b_salary+b_salary);
}else{
printf("Your gross salary is = %.2f",0.3*b_salary+0.95*b_salary+b_salary);
}
return 100;
}
