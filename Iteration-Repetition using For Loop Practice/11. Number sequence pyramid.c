/*This program displays number sequence pyramid
Author: Sadman Chowdhury*/
int main(){
int row,i,j;

printf("Enter the number of rows = ");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(j=0;j<i;j++){
        printf("%d",i+j);
    }
    printf("\n");
}
return 0;
}
