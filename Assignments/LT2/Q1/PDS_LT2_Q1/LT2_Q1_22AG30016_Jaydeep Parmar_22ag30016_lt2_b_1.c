/*Jaydeep
22AG30016*/


#include<stdio.h>
struct Person{
char name[30];
char passport_no[10];
char nationality[15];
char dob[10];
};
int main()
{
    int n;
    printf("enter number of people: ");
    scanf("%d",&n);
    struct Person Persons[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",Persons[i].name);
        scanf("%s",Persons[i].passport_no);
        scanf("%s",Persons[i].nationality);
        scanf("%s",Persons[i].dob);
    }
    printf("\n");
    int m;
    scanf("%d",&m);
    struct Person Persons2[m];
    for(i=0;i<m;i++)
    {
        scanf("%s",Persons2[i].name);
        scanf("%s",Persons2[i].passport_no);
        scanf("%s",Persons2[i].nationality);
        scanf("%s",Persons2[i].dob);
    }
    int k=m+n;
    struct Person Persons_merged[k];
for(i=0;i<n;i++)
{
    Persons_merged[i]=Persons[i];
}
for(i=(n);i<k;i++)
{
    Persons_merged[i]=Persons2[i-m];
}
printf("----\n");
  for(i=0;i<k;i++)
    {
        printf("%s\n",Persons_merged[i].name);
        printf("%s\n",Persons_merged[i].passport_no);
        printf("%s\n",Persons_merged[i].nationality);
        printf("%s\n",Persons_merged[i].dob);
        printf("\n");
    }
    int flag=0;


   return 0;
}
