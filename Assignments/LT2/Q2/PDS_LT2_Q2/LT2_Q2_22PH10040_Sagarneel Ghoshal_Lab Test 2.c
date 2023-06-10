/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Lab Test 2
*Description- Question 2
*/

#include<stdio.h>

struct dob{                          //defining structure for the date of birth
    int dd;
    int mm;
    int yyyy;
};

struct record{                        //defining structure for the records
    char rollNo[11];
    char branch[3];
    struct dob date;
};

int main(){                           //main function
    int n,year,m=0;
    printf("Enter the number of records: ");           //taking in the number of records
    scanf("%d",&n);
    getchar();

    struct record *recs,*recs2;
    recs=(struct record*)malloc(n*sizeof(struct record));             //allocating the memory

    int i;
    for(i=0;i<n;i++){                                         //reading the datas from the users
        printf("\nEnter Roll No. of student %d: ",i+1);
        scanf("%s",recs[i].rollNo);
        printf("\nEnter branch of student %d: ",i+1);
        scanf("%s",recs[i].branch);
        printf("\nEnter Date of Birth of student %d: ",i+1);
        scanf("%d/",&recs[i].date.dd);
        scanf("%d/",&recs[i].date.mm);
        scanf("%d",&recs[i].date.yyyy);
    }

    /*for(i=0;i<n;i++){
        printf("\n\ndata of student %d:",i+1);
        printf("\n%s",recs[i].rollNo);
        printf("\n%s",recs[i].branch);
        printf("\n%d/",recs[i].date.dd);
        printf("%d/",recs[i].date.mm);
        printf("%d",recs[i].date.yyyy);
    }*/

    printf("\n\nEnter the year of birth before which the records will be deleted: ");        //taking in the year
    scanf("%d",&year);

    for(i=0;i<n;i++){
        if(recs[i].date.yyyy<year){                                 //deleting the records
            printf("\nDeleted Record: ");                           //displaying the deleted records
            printf("%s   ",recs[i].rollNo);
            printf("%s   ",recs[i].branch);
            printf("%d/",recs[i].date.dd);
            printf("%d/",recs[i].date.mm);
            printf("%d",recs[i].date.yyyy);
            m++;
        }
        if(m==0) printf("\nNo records deleted");
    }

    int diff=n-m;
    printf("\nm=%d, n-m=%d",m,diff);

    recs2=(struct record*)malloc(diff*sizeof(struct record));

    int j=0;
    for(i=0;i<n;i++){
        if(recs[i].date.yyyy>year){
                recs2[j]=recs[i];
                j++;
        }
    }
    printf("\nRemaining Record: ");                            //printing the remaining records
    if(diff>0){
        //printf("\nRemaining Record: ");
        for(i=0;i<diff;i++){
            printf("\n%s   ",recs2[i].rollNo);
            printf("%s   ",recs2[i].branch);
            printf("%d/",recs2[i].date.dd);
            printf("%d/",recs2[i].date.mm);
            printf("%d",recs2[i].date.yyyy);
            printf("\n");
    }
    }
    else printf("\nNo records remaining");




return 0;

}
