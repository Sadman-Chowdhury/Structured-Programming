/*This program reads the value of an integer m and display the value of m is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int m;

printf("Please enter an integer = ");
scanf("%d",&m);

if(m>0){
printf("The value of %d is 1",m);
}else if(m<0){
printf("The value of %d is -1",m);
}else{
printf("The value of %d is 0",m);
}

return 100;
}
