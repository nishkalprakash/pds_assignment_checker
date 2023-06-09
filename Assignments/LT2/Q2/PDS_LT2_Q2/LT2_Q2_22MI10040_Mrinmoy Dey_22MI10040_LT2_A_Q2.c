/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Lab Test :: 2
Question :: 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct record{
    char rollno[11];
    char branch[3];
    struct dateob{
        int dd;
        int mm;
        int yyyy;
    }dob;
};

int main(){
    int n;
    int y;
    int m=0;
    int flag = 0;
    scanf("%d",&n);
    if ((n<0)||(n>100)){
        printf("Invalid value of N");
    }
    else{
        struct record *rec;
        rec = (struct record *)malloc(n*sizeof(struct record));
        for (int i=0;i<n;i++){
            scanf("%s",rec[i].rollno);
            scanf("%s",rec[i].branch);
            scanf("%d/%d/%d",&rec[i].dob.dd,&rec[i].dob.mm,&rec[i].dob.yyyy);
        }
        scanf("%d",&y);
        for (int i=0;i<n;i++){
            if (rec[i].dob.yyyy<y){
                printf("Deleted Record: %s %s %d/%d/%d \n",rec[i].rollno,rec[i].branch,rec[i].dob.dd,rec[i].dob.mm,rec[i].dob.yyyy);
                m++;
            }
        }
        if (m==0) printf("No records deleted\n");
        printf("m = %d, ",m);
        printf("n - m = %d\n",n-m);
        struct record *rec_new;
        rec_new = (struct record *)malloc((n-m)*sizeof(struct record));
        printf("Remaining Records:\n");
        for (int j=0;j<n;j++){
            if (rec[j].dob.yyyy>=y){
                flag++;
                rec_new[flag] = rec[j];
            }
        }
        for (int i=0;i<n-m;i++){
            printf("%s %s %d/%d/%d \n",rec[i].rollno,rec[i].branch,rec[i].dob.dd,rec[i].dob.mm,rec[i].dob.yyyy);

        }
    }
}

