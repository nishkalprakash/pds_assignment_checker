/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3IM06
q. no-02
description-   */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>





typedef struct{

char roll[11];
char branch[3];
char dob[10];

}record;




int main(){
int n;
int count=0;
record *R;
record  *R2;
printf("ENTER THE NUMBER OF RECORDS \n");
scanf("%d",&n);

R=(record *)malloc(n*sizeof(record));
printf("Enter the inputs\n");
for(int i=0;i<n;i++){

    scanf("%s %s %s",R[i].roll,R[i].branch,R[i].dob);
}



for(int i=0;i<n;i++){

    printf("\n%s  %s  %s\n",R[i].roll,R[i].branch,R[i].dob);
}



int m;
printf("ENTER THE YEAR\n");
scanf("%d",&m);
int term;
term=m%1000;

printf("%c\n",R[1].dob[12]);


for(int i=0;i<n;i++){


    if(R[i].dob[10]<term){
        printf("Deleted record is %s   %s    %s  \n",R[i].roll,R[i].branch,R[i].dob);
        count++;
        strcpy(R[i].roll,"NULL");
    }





}



for(int i=0;i<n-count;i++){
for(int j=0;j<n;j++){

     if(!(strcmp(R[j].roll,"NULL"))){


            R[i]=R[j];
     break;


     }
}

}

printf("AFTER DELETION \n");

R=(record *)realloc(R,(n-count)*sizeof(record));


for(int i=0;i<n-count;i++){

    printf("%s  %s  %s\n",R[i].roll,R[i].branch,R[i].dob);
}





return 0;
}
