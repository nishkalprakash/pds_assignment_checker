#include<stdio.h>
 /*section - 2
    Name - Nain Aditya
    Roll - 22AG10029
    LAB NO - 4
    ASSIGNMENT NO - 2
    PROGRAM - printing patterns*/
    int main(){int n;
    scanf ("%d",&n);
    for (int i = n;i>0;i--){
        for(int j=i;j>1;j--){
            printf(" ");
        }
        for(int j = 1 ; j<=(n-i+1);j++){
            printf("%d",j);
        printf("\n");
        }
      return 0;
    }
    }