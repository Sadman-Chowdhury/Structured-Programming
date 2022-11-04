/*This C program stores 10 whole number in an array and print those numbers!
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int i,num[10];
for(i=0;i<10;i++){
    printf("Enter the number = ");
    scanf("%d",&num[i]);
}
for(i=0;i<10;i++){
    printf("%d \t",num[i]);
}
return 0;
}
