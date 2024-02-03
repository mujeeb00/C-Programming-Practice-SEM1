#include <stdio.h>

int main(){
   int matrix1[2][2]={{2,1},{3,4}};
   int matrix2[2][2]={{3,4},{5,1}},matrixMultiply[2][2];

     printf("1st Matrix\n");
     for(int i=0;i<2;i++){
        for(int x=0;x<2;x++){
                printf("%d  ",matrix2[i][x]);
        }
        printf("\n");
    }
    printf("\n");

    printf("2nd Matrix\n");
      for(int i=0;i<2;i++){
        for(int x=0;x<2;x++){
                printf("%d  ",matrix2[i][x]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<2;i++){
        for(int x=0;x<2;x++){
                matrixMultiply[i][x]=0;
                for(int k=0;k<2;k++){
                    matrixMultiply[i][x]+=matrix1[i][k]*matrix2[k][x];
                }
        }
    }

    printf("Result Matrix\n");

     for(int i=0;i<2;i++){
        for(int x=0;x<2;x++){
                printf("%d  ",matrixMultiply[i][x]);
        }
        printf("\n");
    }


}
