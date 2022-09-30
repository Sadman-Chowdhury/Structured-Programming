/*This program can take input of the values of X & Y Coordinates and shows in which quadrant inputted coordinates lies
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float x,y;

printf("Enter the value of X = ");
scanf("%f",&x);
printf("Enter the value of Y = ");
scanf("%f",&y);

if(x>0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 1st Quadrant",x,y);
}else if(x<0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 2nd Quadrant",x,y);
}else if(x<0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 3rd Quadrant",x,y);
}else if(x>0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 4th Quadrant",x,y);
}else if(x==0 && y==0){
    printf("Inputted coordinate (%.2f, %.2f) lies in the center",x,y);
}else{
printf("The coordinate (%.2f, %.2f) lies in the X or Y axis",x,y);
}
return 0;
}
