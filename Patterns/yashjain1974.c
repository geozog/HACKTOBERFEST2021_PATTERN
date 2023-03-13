<<<<<<< HEAD
// Comment 1
// Comment 2
// Comment 3
// Comment 4
// Comment 5
// Comment 6
// Comment 7
// Comment 8
// Comment 9
// Comment 10
// Comment 11
// Comment 12
// Comment 13
// Comment 14
#include<stdio.h>
int main(){
    int rows=6;
   for(int i=0;i<=rows;i++){
        for(int j=0;j<=2*rows;j++){
        if(j>=rows-i+1 && j<=rows+i-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");}
     for(int i=rows;0<=i;i--){
        for(int j=0;j<=2*rows;j++){
        if(j>=rows-i+1 && j<=rows+i-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");}
return 0;}
// Comment E1
// Comment E2
// Comment E3
// Comment E4
// Comment E5
// Comment E6
// Comment E7
// Comment E8
