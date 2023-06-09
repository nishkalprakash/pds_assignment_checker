/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : labtest 2.
* Description :
*question : 2
*/
#include<stdio.h>
typedef struct rec{
char rollno,branch;
int dd,mm,yyyy;
}rec;
int main()
{
    int n,i;
    rec *p;
    printf("enter no.of records : ");
    scanf("%d" , &n);
    p=(rec*)malloc(n*sizeof(rec));
    printf("enter the details of the persons : ");
    for(i=0;i<n;i++)
    {
        printf("enter the roll no : ");
        scanf(" %s " , p[i].rollno);
        printf("enter branch : ");
        scanf(" %s " , p[i].branch);
        printf("enter the dob : ");
        scanf(" %d%d%d " , &p[i].dd,&p[i].mm,p[i].yyyy);
    }
    printf("records of first person is : ");
    printf("dob is %d/%d/%d" ,p[i].dd , p[i].mm , p[i].yyyy );

return 0;
}
