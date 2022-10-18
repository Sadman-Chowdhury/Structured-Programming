/*This program displays reverse number sequence pyramid
Author: Sadman Chowdhury*/
int main(){
int row,i,j;
printf("Enter the number if rows = ");
scanf("%d",&row);

for(i=row;i>=1;i--){
    for(j=i;j>0;j--){
    printf("%d",j);
    }
    printf("\n");
}
return 0;
}
