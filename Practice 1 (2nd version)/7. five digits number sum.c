/*This program calculates the sum of digits of a five digit number
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    int number,remain,sum=0;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    printf("The sum of digits of this number = %d",sum);
return 100;
}
