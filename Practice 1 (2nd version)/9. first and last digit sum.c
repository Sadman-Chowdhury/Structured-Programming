/*This program calculates the sum of the first and last digit of a five-digit number
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    int number;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    printf("The reverse of this number = %d",number%10+number/10000);
    return 100;
}
