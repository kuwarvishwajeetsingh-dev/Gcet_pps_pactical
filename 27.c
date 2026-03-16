// C program to multiply (nXn) Matrix.
#include<stdio.h>
int main(){
    int l,m,n,p;
    printf("Enter the first matrix order by space separated values (rows_space_columns):");
    scanf("%d %d", &l, &m);
    printf("Enter the second matrix order by space separated values (rows_space_columns):");
    scanf("%d %d", &n, &p);
    if(m != n){
        printf("Matrix multiplication is not possible.");
         return 0;

    }
    int a[l][m];
    printf("Enter the first matrix elements:\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Enter the second matrix elements:\n");
    int b[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
int c[l][p];
//matrix multiplication
for(int i=0;i<l;i++){
        for(int j=0;j<p ;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("The product matrix is:\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<p ;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
