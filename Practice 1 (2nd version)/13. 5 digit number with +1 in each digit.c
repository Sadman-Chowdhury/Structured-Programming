/*This program prints a new number by adding one to each of its digits from a five-digit number input
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

	printf("The new number is = %d%d%d%d%d",++a,++b,++c,++d,++e);

return 100;
}
