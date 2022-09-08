/*This program can find out whether a number is an odd number or even number
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int number;

printf("Please enter a number = ");
scanf("%d",&number);

if(number%2==0){
    printf("%d is an even number",number);
}else{
printf("%d is an odd number",number);
}
return 100;
}
