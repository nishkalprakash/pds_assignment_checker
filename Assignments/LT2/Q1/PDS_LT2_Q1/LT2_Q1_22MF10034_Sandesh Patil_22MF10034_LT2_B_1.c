/*name - sandesh patil
roll no- 22mf10034
sec 2
set b
que - 1*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct record
{
    char name;
    char passport_no;
    char nationality;

};
struct dob
{
    int date;
    int month;
    int year;
};

void read(struct record ,struct dob,int n);
void print(struct record ,struct dob);

int main()
{
    char *persons[100];
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    persons[100]=(char*)malloc(n*sizeof(char));
    read(record,dob,n);



 return 0;
}

void read(struct record ,struct dob, int n)
{


    print("enter the records");

    scanf("%s",record.name);
    scanf("%s",record.passport_no);
    int d=strlen(record.passport_no);
    if(d>11)
    {
        return ;
    }
    scanf("%s",record.nationality);
    int c=strlen(record.nationality);

    if(c>16)
    {
        return ;
    }

    printf("enter date of birth");
    scanf("%d",dob.date);
    scanf("%d",dob.month);
    scanf("%d",dob.year);
}



