/*This program takes week number as an input and prints week day
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int week_number;

printf("Please enter the week number = ");
scanf("%d",&week_number);

if(week_number>=1 && week_number<=52){
    printf("SundayMonday,Tuesday,Wednesday,Thursday,Friday,Saturday");
}else{
printf("Invalid!");
}

return 100;
}
