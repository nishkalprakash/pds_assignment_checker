/*Name: Raj Gupta
  Roll No. : 22ME30050 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct dateofbirth{
    int dd;
    int mm;
    int yyyy;

}date;

typedef struct record{
    char *rollno;
    char *branch;
    date dob;
}rec;

int main()
{
    int n,year;
    scanf("%d",&n);
    rec* a;
    a=(rec*)calloc(n,sizeof(rec));
    for(int i=0;i<n;i++)
    {
        a[i].rollno=(char*)malloc(10*sizeof(char));
        a[i].branch=(char*)malloc(2*sizeof(char));
        a[i].dob.dd=(int)calloc(2,sizeof(int));
        a[i].dob.mm=(int)calloc(2,sizeof(int));
        a[i].dob.yyyy=(int)calloc(4,sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d\/%d\/%d",a[i].rollno, a[i].branch, &a[i].dob.dd, &a[i].dob.mm, &a[i].dob.yyyy);
    }

    scanf("%d",&year);

    int m=0;
    for(int i=0;i<n;i++)
    {
        if((a[i].dob.yyyy)<year)
        {
            printf("Deleted Record: %s %s %d/%d/%d\n",a[i].rollno, a[i].branch, a[i].dob.dd, a[i].dob.mm, a[i].dob.yyyy);
            m++;
        }
    }

    if (m==0)
    {
        printf("No records deleted");
    }
    else
    {
        printf("m = %d, n-m = %d",m,n-m);
    }
    printf("Remaining Records:\n");

    for(int i=0;i<n;i++)
    {
        if ((a[i].dob.yyyy)<year)
            for(int j=i;j<n;j++)
            {
                strcpy(a[j].rollno,a[j+1].rollno);
                strcpy(a[j].branch,a[j+1].branch);
                a[j].dob.dd=a[j+1].dob.dd;
                a[j].dob.mm= a[j+1].dob.mm;
                a[j].dob.yyyy= a[j+1].dob.yyyy;
            }
    }
    realloc(a,(n-m)*sizeof(rec));
    if (n-m == 0)
    {
        printf("\nNo remaining records");
    }
    else
    {
        for(int i=0;i<n-m;i++)
        {
            printf("Deleted Record: %s %s %d/%d/%d\n",a[i].rollno, a[i].branch, a[i].dob.dd, a[i].dob.mm, a[i].dob.yyyy);
        }
    }


}
