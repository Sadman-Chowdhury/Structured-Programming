/*This program reverse a number
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    int number,a,b,c,d,e;

    printf("Please enter a five-digit number = ");
    scanf("%d",&number);

    e=number%10;
    d=(number/10)%10;
    c=(number/100)%10;
    b=(number/1000)%10;
    a=(number/10000);

    printf("The reverse of this number = %d",e*10000+d*1000+c*100+b*10+a);
    return 100;
}

