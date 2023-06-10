// Shivee Gupta
//22Mt10050 Sec2 Set A

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct DOB{
int dd;
int mm;
int yyyy;
};

typedef struct{
char rollno[10];
char branch[2];
struct DOB dob;
}record;

//void swap(record*stud,int n){
//int i;

//}
void print(record*stud,int i){
printf("%s %s %d/%d/%d\n",stud[i].rollno,stud[i].branch,stud[i].dob.dd,stud[i].dob.mm,stud[i].dob.yyyy);
}

int main(){
    int n,i,y;
    printf("Enter the number of records to be stored : ");
    scanf("%d",&n);
    record *stud = (record*)malloc(n*sizeof(record));
    for(i=0;i<n;i++){
        printf("Enter Roll number for student %d : ",i+1);
        scanf("%s",stud[i].rollno);
        printf("Enter the branch for student %d : ",i+1);
        scanf("%s",stud[i].branch);
        printf("Enter the DOB of student %d in dd/mm/yyyy format : ",i+1);
        scanf("%d/%d/%d",&stud[i].dob.dd,&stud[i].dob.mm,&stud[i].dob.yyyy);
        //printf("%d",stud[0].dob.dd);

    }
    printf("Enter the year :  ");
    scanf("%d",&y);
    printf("Deleted records : \n");
    int del =0;
    for(i=0;i<n;i++){
    if(stud[i].dob.yyyy<y){
         del++;
        print(&stud,i);
       stud[i].rollno = stud[i+1].rollno;
       stud[i].branch = stud[i+1].branch;
       stud[i].dob.dd = stud[i+1].dob.dd;
       stud[i].dob.mm = stud[i+1].dob.dd;
       stud[i].dob.yyyy = stud[i+1].dob.dd;
    }

    }
    if(del==0) printf("No records deleted\n");
    printf("Remaining records : \n");
     for(i=0;i<n;i++){print(&stud,i);}

    free(stud);
    return 0;
}
