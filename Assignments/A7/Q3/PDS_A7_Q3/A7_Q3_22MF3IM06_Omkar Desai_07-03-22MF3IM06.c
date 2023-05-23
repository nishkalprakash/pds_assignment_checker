
/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-03
description-   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


char **a;
char  **b;
int n;
int m,b;

printf("How many names do you want to print in fist set\n");
scanf("%d ",&n);


a=(char**)calloc(n,sizeof(char*));

for(int i=0;i<n;i++){
    a[i]=(char*)calloc(100,sizeof(char));
}

printf("Enter the names \n");

for(int i=0;i<n;i++){
    //for(int j=0;a[i][j]!='\0';j++)
      //  {
        scanf("%[^\n]%*c",a[i]);
    //}
}

printf("You have entered names of first set \n");
for(int i=0;i<n;i++){
    //for(int j=0;a[i][j]!='\0';j++){
        printf("%s",a[i]);
   // }
    printf("\n");
}

printf("NOW ITS TURN FOR SECOND SET\n");


printf("How many names do you want to print in second set\n");
scanf("%d ",&m);


b=(char**)calloc(m,sizeof(char*));

for(int i=0;i<m;i++){
    b[i]=(char*)calloc(100,sizeof(char));
}

printf("Enter the names \n");

for(int i=0;i<m;i++){
    //for(int j=0;a[i][j]!='\0';j++)
      //  {
        scanf("%[^\n]%*c",b[i]);
    //}
}

printf("You have entered names of second set \n");
for(int i=0;i<m;i++){
    //for(int j=0;a[i][j]!='\0';j++){
        printf("%s",b[i]);
   // }
    printf("\n");
}


//for(int i=0;i<(n-1);i++){
   //for(int j=1;j<n;j++){
       //b= strcmp(a[i],a[j]);
 //   }
//}



return 0;
}
