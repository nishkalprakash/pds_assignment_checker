// Megha Singhal, 22AE10022,section 2, set B, Question 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct person
{
    char name[32];
    char p_no[12];
    char nt[17];
    int date;
    int month;
    int year;
};
void read(struct person*);
void print(struct person,int);
int main()
{
    int n,m,i,j,c=0;
    printf("Enter no. of persons: ");
    scanf("%d",&n);
    struct person *p=malloc(n*sizeof(struct person));
    for(i=0;i<n;i++)
    {
        read(&p[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        print(p[i],i+1);
        printf("\n\n");
    }
    printf("Enter no. of persons: ");
    scanf("%d",&m);
    struct person *p2=malloc(m*sizeof(struct person));
    for(i=0;i<n;i++)
    {
        read(&p2[i]);
        printf("\n");
    }
    struct person *pm=malloc((n+m)*sizeof(struct person));
    for(i=0,j=0;i<n,j<m;i++,j++)
    {
        pm[i]=p[i];
        pm[j+n]=p2[j];
    }

    for(i=0;i<(m+n);i++)
    {
        if(strcmp(pm[i].nt,'India'))
            c++;
    }
    if(c>0)
    {
        printf("All Persons Having nationality India\n");
        for(i=0;i<(m+n);i++)
        {
            if(strcmp(pm[i].nt,'India'))
                print(pm[i],i+1);
        }
    }
    else printf("No persond having nationality as India");
    free(p);
    free(p2);
    free(pm);
    return 0;

}
void read(struct person *a)
{
    char s[2];
    printf("Enter details of person:\nEnter Name ");
    fgets(s,2,stdin);
    *fgets(a->name,32,stdin);
    printf("Enter Passport no. ");
    *fgets(a->p_no,12,stdin);
    printf("Enter Nationality ");
    *fgets(a->nt,17,stdin);
    printf("Enter DOB ");
    scanf("%d %d %d",&a->date,&a->month,&a->year);
}
void print(struct person a,int b)
{
    printf("person %d\n%s%s",b,a.name,a.p_no);
    printf("%s%d-%d-%d",a.nt,a.date,a.month,a.year);
}
