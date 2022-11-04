/*This C program takes 10 numbers input and then calculate and show the average of the array elements.
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float num[10],sum=0,ave;
int i;
for(i=0;i<10;i++){
    printf("Enter the number = ");
    scanf("%f",&num[i]);
    sum=sum+num[i];
}
ave=sum/10;
printf("The average of the given array elements = %.2f",ave);
return 0;
}
