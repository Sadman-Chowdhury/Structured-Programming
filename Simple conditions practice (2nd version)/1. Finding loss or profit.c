/*This program determines whether a seller has made profit or incurred loss and how much profit he made or loss he incurred
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float cost_price, sell_price;

printf("Please enter the cost price of the item = ");
scanf("%f",&cost_price);
printf("Please enter the sell price of the item = ");
scanf("%f",&sell_price);

if(sell_price>cost_price){
    printf("The seller has made a profit of %.2f",sell_price-cost_price);
}else{
printf("The seller has incurred loss of %.2f",cost_price-sell_price);
}
return 100;
}
