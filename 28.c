//Sum of diagonal elements of a matrix!!!!!!!!
#include<stdio.h>
int main(){
    printf("Enter the  matrix order by space separated values (rows_space_columns):");
    int l, m;
    scanf("%d %d", &l, &m);
    int a[l][m];
    printf("Enter the matrix elements:\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
int sum=0;
for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            if(i==j){
              sum=sum+a[i][j];
              continue;
            }
           
        }
    }
printf("The sum of the diagonal elements is: %d",sum);
    return 0;
}