/*This program is for finding the aggregate marks and percentage marks obtained by a student
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float bangla,english,mathematics,ict,physics;

    printf("Enter your obtained mark in bangla= ");
    scanf("%f",&bangla);

    printf("Enter your obtained mark in english= ");
    scanf("%f",&english);

    printf("Enter your obtained mark in mathematics= ");
    scanf("%f",&mathematics);

    printf("Enter your obtained mark in ict= ");
    scanf("%f",&ict);

    printf("Enter your obtained mark in physics= ");
    scanf("%f",&physics);

    printf("Aggregate mark= %.2f",bangla+english+mathematics+ict+physics);

    printf("\nPercentage mark= %.2f",(bangla+english+mathematics+ict+physics)/5);

    return 100;
}
