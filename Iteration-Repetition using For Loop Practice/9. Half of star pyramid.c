/*This program displays a half pyramid of star
Author: Sadman Chowdhury*/
int main(){
int row,i,j;

printf("Enter the number of rows = ");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
