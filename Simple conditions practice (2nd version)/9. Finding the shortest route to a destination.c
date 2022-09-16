/*If someone wants to go to the shopping complex from his home and there are two alternative
routes to go there. One route is A and another one is B. In A route distance from his home to
the shopping complex is 15.6 kilometers and in B route the distance is 18 kilometers. Now
considering this situation, this program can determine the shortest route to the destination.
Author: Sadman Chowdhury*/
#include<stdio.h>
int main(){
float a,b;
printf("Please enter the distance of the first route(A) = ");
scanf("%f",&a);
printf("Please enter the distance of the second route(B) = ");
scanf("%f",&b);

if(a<b){
    printf("A is the shortest route to the destination");
}else{
printf("B is the shortest route to the destination");
}

return 100;
}
