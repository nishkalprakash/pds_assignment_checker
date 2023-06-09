/*
NAME : Kasireddi Subha Moneesh
ROLL NO. : 22CH10032
*/
#include<stdio.h>

typedef struct
{
    int dd;
    int mm;
    int yyyy;
}DOB;

typedef struct
{
    char rollNo[10];
    char branch[2];
    DOB dob;
}record;

int main()
{
    int n,i,y,m=0;
    record *p;
    scanf("%d",&n);
    p=(record *)malloc(n*sizeof(record));
    for(i=0;i<n;++i)
    {
        scanf("%s %s %d/%d/%d",&p->rollNo,&p[i].branch,&p[i].dob.dd,&p[i].dob.mm,&p[i].dob.yyyy);
    }

    scanf("%d",&y);
    for(i=0;i<n;++i)
    {
        if(p[i].dob.yyyy<y)
        {
            printf("Deleted record: %s %s %d/%d/%d\n",p[i].rollNo,p[i].branch,p[i].dob.dd,p[i].dob.mm,p[i].dob.yyyy);
            p[i]=p[i+1];
            --i;
            --n;
            ++m;
        }
    }

    printf("m = %d, n - m = %d\n",m,n);
    printf("Remaining records:\n");
    for(i=0;i<n;++i)
    {
        printf("%s %s %d/%d/%d\n",p[i].rollNo,p[i].branch,p[i].dob.dd,p[i].dob.mm,p[i].dob.yyyy);
    }
    return 0;
}
