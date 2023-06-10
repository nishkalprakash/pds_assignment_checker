
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Lab Test 2
* SET-A
* Q-2
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Defined the format for DOB
typedef struct{
    int dd;
    int mm;
    int yyyy;
}DOB;

//Defined the structure for keeping records
typedef struct{
    char rollNo[10];
    char branch[3];
    DOB dob;
}Records;

int main()
{
     int n,t_year,m=0,N=100;
     printf("Enter number of records:");
     scanf("%d",&n);
     if (n>0 && n<=100){
     Records *Rec=(Records *)calloc(n,sizeof(Records)); //Allocated requisite memory
     //Read n number of records
     for (int i=0;i<n;i++){
        printf("Enter record no %d\n: ",i+1);
        printf("\tRollNo: ");
        scanf("%s",Rec[i].rollNo);
        printf("\tBranch: ");
        scanf("%s",Rec[i].branch);
        printf("\tDate: ");
        scanf("%d/",&Rec[i].dob.dd);
        printf("\tMonth: ");
        scanf("%d/",&Rec[i].dob.mm);
        printf("\tYear: ");
        scanf("%d",&Rec[i].dob.yyyy);
        printf("\n");
     }
     printf("Enter Threshold Year:");
     scanf("%d",&t_year);

     for (int i=0;i<n;i++){
        if ( Rec[i].dob.yyyy < t_year){
            printf("Deleted Record: %s %s %d/%d/%d\n",Rec[i].rollNo,Rec[i].branch,Rec[i].dob.dd,Rec[i].dob.mm,Rec[i].dob.yyyy); //printed deleted records
            m++;
        }
     }
     if (!m) {
        printf("No records deleted");
        printf("m = %d, n - m = %d\n",m,n-m);
     }
     else {
        printf("m = %d, n - m = %d\n",m,n-m);
     }
     /*for (int i=0;i<n;i++){
        if (Rec[i].dob.yyyy < t_year){
            free(Rec[i]);
        }
    }*/
     printf("Remaining Records:\n"); //printed remaining records
     for (int i=0;i<n;i++){
        if (n-m == 0) {printf("No records remaining");}
        else if (Rec[i].dob.yyyy >= t_year){
            printf("%s %s %d/%d/%d\n",Rec[i].rollNo,Rec[i].branch,Rec[i].dob.dd,Rec[i].dob.mm,Rec[i].dob.yyyy);
        }
     }
     }
     else printf("Invalid Value of N");

     return 0;

}
