/*
Section: 2
Roll No: 22CS30036
Name: Lakshya Agrawal
Question No: 02
Description: Management of Records
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Date{
    char str[11];
}Date;

typedef struct Record{
   char rollNo[10];
   char branch[3];
   Date dob;
}Record;

void move_to_last(Record *arr,int i,int n)
{
    Record temp = arr[i];

    int j;
    for(j=i;j<(n-1);j++)
        arr[j] = arr[j+1];

    arr[j] = temp;
}

void print_deleted_record(Record rec)
{
    printf("Deleted Record: %s %s %s\n",rec.rollNo,rec.branch,rec.dob.str);
}

void print_records(Record *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %s %s\n",(arr[i].rollNo),(arr[i].branch),(arr[i].dob.str));
    }
}

int convert_str_to_int(char *dob)
{
    int d1,d2,d3,d4;
    d1 = dob[6] - '0';
    d2 = dob[7] - '0';
    d3 = dob[8] - '0';
    d4 = dob[9] - '0';
    return ((1000*d1)+(100*d2)+(10*d3)+d4);
}

int delete_record(Record *arr,int year,int n)
{
    int m=0,arr_year;
    for(int i=0;i<n;i++)
    {
        arr_year = convert_str_to_int(arr[i].dob.str);
        if(arr_year < year)
        {
          print_deleted_record(arr[i]);
          move_to_last(arr,i,n);
          arr = realloc(arr,n-1);
          n--;
          m++;
          i--;
        }
    }
    if(m==0)
    {
        printf("No records deleted\n");
    }
    return m;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(n<=0 || n>=101)
    {
        printf("\nInvalid value of N\n");
        exit(0);
    }

    Record *arr = (Record*)malloc(n*sizeof(Record));
    int year,m;
    for(int i=0;i<n;i++)
    {
        scanf("%s",(arr[i].rollNo));
        scanf("%s",(arr[i].branch));
        scanf("%s",arr[i].dob.str);
    }
    scanf("%d",&year);

    printf("\n");
    m = delete_record(arr,year,n);
    printf("m = %d, n - m = %d\n",m,n-m);
    printf("Remaining Records:\n");
    if((n-m)!=0)
    {
       print_records(arr,n-m);
    }
    else
    {
        printf("No records remaining\n");
    }

    return 0;
}

