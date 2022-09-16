/*This program finds the cost price of one item from the total selling price of 15 items and the total profit earned on them
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float total_price,total_profit;

printf("Please enter the total selling price of the 15 items = ");
scanf("%f",&total_price);

printf("Please enter the total profit on the 15 items = ");
scanf("%f",&total_profit);

printf("The cost price of each item is = %.2f",(total_price-total_profit)/15);
return 100;
}
