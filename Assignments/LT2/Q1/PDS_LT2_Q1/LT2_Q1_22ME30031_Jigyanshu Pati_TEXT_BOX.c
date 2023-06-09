//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST 2
//description:Q1
//SET B
#include<stdio.h>
struct dob
{
    int date;
    int month;
    int year;
};
struct Person
{
    char name[30];
    char passport_no[10];
    char nationality[15];
};
void read(struct Person a,struct dob b)
{
    scanf("%s",a.name);
    scanf("%s",a.passport_no);
    scanf("%s",a.nationality);
    scanf("%d",&b.date);
    scanf("%d",&b.month);
    scanf("%d",&b.year);

}
void print(struct Person a, struct dob b)
{
  printf("%s\n",a.name);
    printf("%s ",a.passport_no);
    printf("%s ",a.nationality);
    printf("%d-",b.date);
    printf("%d-",b.month);
    printf("%d",b.year)//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST 2
//description:Q1
#include<stdio.h>
struct dob
{
    int date;
    int month;
    int year;
};
struct Person
{
    char name[30];
    char passport_no[10];
    char nationality[15];
};
void read(struct Person a,struct dob b)
{
    scanf("%s",a.name);
    scanf("%s",a.passport_no);
    scanf("%s",a.nationality);
    scanf("%d",&b.date);
    scanf("%d",&b.month);
    scanf("%d",&b.year);

}
void print(struct Person a, struct dob b)
{
  printf("%s\n",a.name);
    printf("%s ",a.passport_no);
    printf("%s ",a.nationality);
    printf("%d-",b.date);
    printf("%d-",b.month);
    printf("%d",b.year);
}
int main()
{
    int n,i,m;
    char a[10];
    scanf("%d",&n);
    struct Person Persons[n];
    struct dob Personsd[n];
    for (i=0;i<n;i++)
    {
        read(Persons[i],Personsd[i]);
    }
    printf("\n");
    scanf("%d",&m);
     struct Person Persons2[m];
    struct dob Personsd2
            print(Persons_merged[i],Persons_merg[m];
    for (i=0;i<m;i++)
    {
        read(Persons2[i],Personsd2[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("**Person %d**\n",i);
        print(Persons[i],Personsd[i]);
        printf("\n\n");
    }
    struct Person Person
            print(Persons_merged[i],Persons_mergs_merged[n+m];

     struct dob Persons_mergedbirth[n+m];
    for (i=0;i<n;i++)
    {
        Persons_merged[i]=Persons[i];
    }
    for (i=0;i<m;i++)
    {
        Persons_merged[n+i]=Persons2[i];
    }
    for (i=0;i<n;i++)
    {
        Persons_mergedbirth[i]=Personsd[i];
    }
    for (i=0;i<m;i++)
    {
        Persons_mergedbirth[n+i]=Personsd2[i];
    }
    printf("All the person having nationality as Indian:\n");
    for(i=0;i<n+m;i++)
    {
        if (strcmp(Persons_merged[i].nationality,"India")==0)
        {
            printf("**Person %d**\n",i);
            print(Person
            print(Persons_merged[i],Persons_mergs_merged[i],Persons_mergedbirth[i]);
            printf("\n\n");
        }
    }

};
}
int main()
{
    int n,i,m;
    char a[10];
    scanf("%d",&n);
    struct Person Persons[n];
    struct dob Personsd[n];
    for (i=0;i<n;i++)
    {
        read(Persons[i],Personsd[i]);
    }
    printf("\n");
    scanf("%d",&m);
     struct Person Persons2[m];
    struct dob Personsd2
            print(Persons_merged[i],Persons_merg[m];
    for (i=0;i<m;i++)
    {
        read(Persons2[i],Personsd2[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("**Person %d**\n",i);
        print(Persons[i],Personsd[i]);
        printf("\n\n");
    }
    struct Person Person
            print(Persons_merged[i],Persons_mergs_merged[n+m];

     struct dob Persons_mergedbirth[n+m];
    for (i=0;i<n;i++)
    {
        Persons_merged[i]=Persons[i];
    }
    for (i=0;i<m;i++)
    {
        Persons_merged[n+i]=Persons2[i];
    }
    for (i=0;i<n;i++)
    {
        Persons_mergedbirth[i]=Personsd[i];
    }
    for (i=0;i<m;i++)
    {
        Persons_mergedbirth[n+i]=Personsd2[i];
    }
    printf("All the person having nationality as Indian:\n");
    for(i=0;i<n+m;i++)
    {
        if (strcmp(Persons_merged[i].nationality,"India")==0)
        {
            printf("**Person %d**\n",i);
            print(Person
            print(Persons_merged[i],Persons_mergs_merged[i],Persons_mergedbirth[i]);
            printf("\n\n");
        }
    }

}