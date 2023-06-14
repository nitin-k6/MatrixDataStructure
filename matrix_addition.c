#include<stdio.h>
int main(){
    int r,c,a[100][100] , b[100][100], sum[100][100];
    int i , j;
    
    printf("Enter the number of rows");
    scanf("%d" ,&r);
    
    printf("Enter the number of columns");
    scanf("%d" ,&c);
    
    printf("Enter elements of first matrix:");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("Enter element a%d%d", i+1 , j+1);
            scanf("%d" , &a[i][j]);
        }
    }
    
    
    /*  printf("\nEnter First Matrix : n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         scanf("%d", &a[i][j]);
      }
   }
  
  printf("The First Matrix is: \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }
   */
    
    printf("Enter elements of second matrix:");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element b%d%d" , i+1 , j+1);
            scanf("%d" , &b[i][j]);
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j] + b[i][j];
            
        }
    }
    
    printf("Sum of two matrices:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d" ,sum[i][j]);
            if (j==c-1){
                printf("\n\n");
            }
        }
    }
}