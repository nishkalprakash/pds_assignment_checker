/*NAME - Nain Aditya
roll no . 22AG10029
section - 2 LAB TEST 2
QUESTION 2*/
#include <stdio.h>
#include<stdlib.h>
typedef struct records{
    char rollno[10];
    char branch[3];
    union {
    int dd;
    int mm;
    int yyyy;
    }dob;
}records;
void remov(records *a,records a1,int n1,int n){
    printf("end");
     for(int i=n1;i<n-1;i++){
        strcpy(a[n1].rollno,a[n1+1].rollno);
        strcpy(a[n1].branch,a[n1+1].branch);
        a[n1].dob.dd=a[n1+1].dob.dd;
        a[n1].dob.mm=a[n1+1].dob.mm;
        a[n1].dob.yyyy=a[n1+1].dob.yyyy;
     }
     }
int main(){
    int n;
    records *r;
    scanf("%d",&n);
    r=(records*)malloc(n*sizeof(records));
    for (int i =0 ;i<n;i++){
        scanf("%s",r[i].rollno);
        scanf("%s",r[i].branch);
        scanf("%d",&r[i].dob.dd);
        scanf("%d",&r[i].dob.mm);
        scanf("%d",&r[i].dob.yyyy);
    }
    int y;
    scanf("%d",&y);int count =0;
    for (int i =0;i<n;i++){
        if (r[i].dob.yyyy<y){count++;
            printf("deleted record :\n");
            printf("%s ",r[i].rollno);
            printf("%s ",r[i].branch);
            printf("%d/",r[i].dob.dd);
            printf("%d/",r[i].dob.mm);
            printf("%d ",r[i].dob.yyyy);
            printf("\n");
            //remov(r,r[i],i,n);
            //r=(records*)realloc(1,sizeof(records));
        }}
    printf("m = %d, n-m = %d ",count,n-count);
    for (int i=0;i<n;i++){
        if (r[i].dob.yyyy>y){
            printf("remaining record :\n");
            printf("%s ",r[i].rollno);
            printf("%s ",r[i].branch);
            printf("%d/",r[i].dob.dd);
            printf("%d/",r[i].dob.mm);
            printf("%d ",r[i].dob.yyyy);
            printf("\n");
    }

    }}




