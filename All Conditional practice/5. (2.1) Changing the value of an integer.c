/*If integer variable currentNumber is odd,This program changes a integers value so that it is now 3 times the value plus 1, otherwise change its value so that it is now half of the value
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int currentNumber;

printf("Enter the number = ");
scanf("%d",&currentNumber);

if((currentNumber%2)!=0){
    printf("The value of the number = %d",(currentNumber*3)+1);
}else{
    printf("The value is %d",currentNumber/2);
}
return 0;
}
