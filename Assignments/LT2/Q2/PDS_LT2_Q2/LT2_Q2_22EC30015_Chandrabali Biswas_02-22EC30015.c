/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description:Management of Records
*/
#include <stdio.h>
#include <stdlib.h>   //Header files
typedef struct date{  //defining structure date
        int dd;
        int mm;
        int yyyy;
    }date;
typedef struct record{ //defining structure record
    char rollNo[10];
    char branch[2];
    date dob;
}record;
int main()    //main method
{
    int n,Y,k=0,m=0,r=0;
    printf("Enter number of records(1-100):");
    scanf("%d",&n);   //takes input from user
    if(n<=0 || n>100)  //for invalid input
    {
        printf("Invalid value of N");
        exit(0);  //program terminates
    }
    record* a = (record*)malloc(n*sizeof(record)); //dynamically allocating memory
    for(int i=0;i<n;i++) //takes input in the array
    {
        printf("Enter roll number:");
        scanf("%s",&a[i].rollNo);
        printf("Enter branch:");
        scanf("%s",&a[i].branch);
        printf("Enter date(dd/mm/yyyy):");
        scanf("%d%d%d",&a[i].dob.dd,&a[i].dob.mm,&a[i].dob.yyyy);
    }
    printf("\nEnter Y(year of birth):");
    scanf("%d",&Y);   //takes input from user (year of birth)
    record* b = (record*)malloc(n*sizeof(record)); //dynamically allocating memory
    for(int i=0;i<n;i++)
    {
        if(a[i].dob.yyyy<Y)  //if year less than input year stores in the array b
        {
            b[k++]=a[i];
            m++; //keeps count of number of elements deleted
        }
        else
        {
            a[r++] = a[i]; //updates array a
        }
    }
    if(m==0) //no elements are being deleted
        printf("No records deleted\n");
    else
    {
        for(int i=0;i<k;i++)  //prints deleted records
        {
            printf("Deleted Record:%s %s %d/%d/%d\n",b[i].rollNo,b[i].branch,b[i].dob.dd,b[i].dob.mm,b[i].dob.yyyy);

        }
    }
    printf("m = %d, n-m = %d\n",m,n-m); //prints values of m and n-m
    a = (record*)realloc(a,(n-m)*sizeof(record));
    printf("Remaining Records:\n");
    if(m==n)
        printf("No records remaining\n"); //if all elements are deleted
    else
        for(int i=0;i<n-m;i++)
        {
            printf("%s %s %d/%d/%d\n",a[i].rollNo,a[i].branch,a[i].dob.dd,a[i].dob.mm,a[i].dob.yyyy); //prints remaining elements
        }
    free(a);
    free(b);

return 0; //end
}
