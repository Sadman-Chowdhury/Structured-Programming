/*This program displays a menu in a restaurant and input user choice
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
int choice;

printf("Food menu:\n 1.Rice\n 2.Fish\n 3.Chicken\n 4.Vegetable\n Please enter your choice:");
scanf("%d",&choice);

if(choice==1){
    printf("Your food item is rice");
}else if(choice==2){
printf("Your food item is fish");
}else if(choice==3){
printf("Your food item is chicken");
}else if(choice==4){
printf("Your food item is vegetable");
}else{
printf("Not available");
}
return 100;
}
