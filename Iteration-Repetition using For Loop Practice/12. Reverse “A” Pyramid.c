/*This program displays reverse "A" pyramid
Author: Sadman Chowdhury*/
int main(){
int row,i,j;
printf("Enter the number if rows = ");
scanf("%d",&row);

for(i=row;i>=1;i--){
    for(j=i;j>=1;j--){
    printf("A");
    }
    printf("\n");
}
return 0;
}

