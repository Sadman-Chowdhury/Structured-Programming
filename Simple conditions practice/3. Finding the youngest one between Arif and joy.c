/*This program can determine the youngest one between Arif and Joy
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int arif_age;
int joy_age;

printf("Please enter Arif's age = ");
scanf("%d",&arif_age);
printf("Please enter Joy's age = ");
scanf("%d",&joy_age);

if(arif_age<joy_age){
    printf("Arif is the youngest");
}else{
printf("Joy is the youngest");
}
return 100;
}
