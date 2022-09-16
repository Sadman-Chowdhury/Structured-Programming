/*This program shows the distance between Mirpur and Ashulia in meter, feet, inches and centimeter
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float kilometer;

    printf("Enter the distance between Mirpur and Ashlia(km)= ");
    scanf("%f",&kilometer);

    printf("Distance in meter= %.2f",1000*kilometer);
    printf("\nDistance in feet= %.4f",3280.8399*kilometer);
    printf("\nDistance in inches= %.4f",39370.0787*kilometer);
    printf("\nDistance in centimeter= %.4f",100000*kilometer);
    return 100;
}
