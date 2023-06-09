/*
Name    : Krish Debroy
Roll No : 22MA10029
*/

#include <stdio.h>
#include <stdlib.h>
#define Max_rec 100

typedef struct
{
    int dd;
    int mm;
    int yyyy;
} date;

typedef struct
{
    char rollno[10];
    char branch[3];
    date dob;

} record ;

int main()
{
    int n,m=0,year;
    printf("Enter the number of records :");
    scanf("%d",&n);
    if (n>Max_rec)
    {
        printf("Invalid value of N.");
        return 0;
    }
    record* rec= (record *)malloc(n*sizeof(record));
    printf("Enter the records :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",rec[i].rollno);
        getchar();
        scanf("%s",rec[i].branch);
        getchar();
        scanf("%d/%d/%d",&rec[i].dob.dd,&rec[i].dob.mm,&rec[i].dob.yyyy);

    }
    printf("Enter cutoff year (Y) :");
    scanf("%d",&year);
    printf("\n");
    int check=0,mark=n-1;/*check is the index of record being checked. mark is the index of the last valid record. */
    record temp;
    for(int j=0;j<n;j++)
    {
        if(rec[check].dob.yyyy<year)/*if the year is lesser than cutoff year we replace checked record with last valid record and change value of mark*/
        {
            temp=rec[check];
            rec[check]=rec[mark];
            rec[mark]=temp;
            mark--;
            m++;
        }
        else
        {
            check++;
        }

    }
    printf("m = %d , n-m = %d\n",m,n-m);
    for (int k=n-m;k<n;k++)
    {
        printf("Deleted Record : %s %s %d/%d/%d \n",rec[k].rollno,rec[k].branch,rec[k].dob.dd,rec[k].dob.mm,rec[k].dob.yyyy);
    }
    rec = (record* )realloc(rec,(n-m)*sizeof(record));/*since all invalid records are moved to the end we can comfortably realloc the main array to size of number of valid arrays*/

    printf("Remaining records : \n");
    for(int l=0;l<n-m;l++)
    {
        printf("%s %s %d/%d/%d \n",rec[l].rollno,rec[l].branch,rec[l].dob.dd,rec[l].dob.mm,rec[l].dob.yyyy);
    }





    free(rec);
    return 0;
}

