//Name-Srija Biswas
//Roll No.-22ME30069
//Sec-2
//Problem-2
//Description-
#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct{ //defining structure for dob
        int d;
        int m;
        int y;
    }dob;
typedef struct{ //defining structure for record
    char rollNo[20];
    char branch[2];
    dob d1;
}record;
int main()
{
    record *ar,*r,*b;
    int n,i,m=0;
    printf("Enter number of records to be allocated\n");//entering number of records
    scanf("%d",&n);
    if(n>100) //code for invalid n
    {
        printf("Invalid value of N");
        return 0;
    }
    ar=(int*)malloc(n*sizeof(int));
    printf("Enter the records\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&ar[i].rollNo);
        scanf("%s",&ar[i].branch);
        scanf("%d/",&ar[i].d1.d);
        scanf("%d/",&ar[i].d1.m);
        scanf("%d",&ar[i].d1.y);
    }
    printf("The records\n");
    for(i=0;i<n;i++)
    {
        printf("%s ",ar[i].rollNo);
        printf("%s ",ar[i].branch);
        printf("%d/",ar[i].d1.d);
        printf("%d/",ar[i].d1.m);
        printf("%d\n",ar[i].d1.y);
    }
    int yy;
    printf("Enter the year\n");//enter year
    scanf("%d",&yy);
    for(i=0;i<n;i++)
    {
        if(ar[i].d1.y<yy){m++;
            printf("Deleted Record:");
            printf("%s %s %d/%d/%d\n",ar[i].rollNo,ar[i].branch,ar[i].d1.d,ar[i].d1.m,ar[i].d1.y);
            free(ar+i);}

    }
    ar=realloc(ar,(n-m));
    printf("Remaining Records:\n");
    for(i=0;i<(n-m);i++)
    {
        printf("%s %s %d/%d/%d\n",ar[i].rollNo,ar[i].branch,ar[i].d1.d,ar[i].d1.m,ar[i].d1.y);
    }
   return 0;
}


