#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int sparsematrix[4][5] = {

        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }

    };

    int size=0;
    for(int i=0; i<4; i++){
        for(j=0;j<5;j++){
            if(sparsematrix[i][j]!=0)
            size++;
        }
    }
 
    int compacttmatrix[3][size]; // no.of columns in size of compactmatrix should equal to no. of non zero elements

    int k=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(compactmatrix[i][j]!=0){
                compactmatrix[0][k]=i;
                compactmatrix[1][k]=j;
                compactmatrix[2][k]=sparsematrix[i][j];
                k++;
            }
        }
    }

       for(int i=0; i<3; i++){
           for(int j=0; j<size; j++){
               printf("%d", compactmatrix[i][j]);
               printf("/n");
           }
       }
   
    }






    