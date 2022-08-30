/*This program is for finding the aggregate marks and percentage marks obtained by a student
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
    float bangla;
    float english;
    float mathematics;
    float ict;
    float physics;
    float aggregate_mark;
    float percentage_mark;

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

    aggregate_mark=bangla+english+mathematics+ict+physics;
    printf("Aggregate mark= %.2f",aggregate_mark);

    percentage_mark=aggregate_mark/5;
    printf("\nPercentage mark= %.2f",percentage_mark);

    return 100;
}
