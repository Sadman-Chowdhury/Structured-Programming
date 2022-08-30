/*This program shows the distance between Mirpur and Ashulia in meter, feet, inches and centimeter
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float kilometer;
    float meter;
    float feet;
    float inches;
    float centimeter;

    printf("Enter the distance between Mirpur and Ashlia(km)= ");
    scanf("%f",&kilometer);

    meter=1000*kilometer;
    feet=3280.8399*kilometer;
    inches=39370.0787*kilometer;
    centimeter=100000*kilometer;

    printf("Distance in meter= %.2f",meter);

    printf("\nDistance in feet= %.4f",feet);

    printf("\nDistance in inches= %.4f",inches);

    printf("\nDistance in centimeter= %.4f",centimeter);
    return 100;
}
