//Q:Write a program to print the following pattern
//* 
//* *
//* * *
//* * * *
#include <stdio.h>
int main(){
    int r;
    printf("number of row/column (nxn):");
    scanf("%d",&r);
    for(int i=0;i<r;i++) {
        for (int j = 0; j <= i;j++){
            printf("* ");
        }
        printf("\n");
    }
}