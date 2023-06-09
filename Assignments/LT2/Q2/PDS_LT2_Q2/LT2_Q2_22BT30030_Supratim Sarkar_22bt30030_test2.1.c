#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct {
 int roll no;
 char branch[50]
 char dob[12];
 }s;
 int main(){
 int n,i;
 char y[12]
 printf ("enter the no of students records:");
 scanf("%d", &n);
 printf("enter 'y':");
 scanf("%s",y);


 s*r = (s*)malloc(n*sizeof(s));
 for (i=0;i<n;i++)
    printf ("\n enter the details")
    printf("roll no");


   scanf("%d",&(r[i].rollno));
   printf("branch:");
   scanf("%s",&r[i].branch);
   printf("dob:");
   scanf("%s",&r[i].dob);
   int c = 0
   for (i = 0,i<n;i++){
        if strcmp (r[i].dob,y) >= 0
        {

        r[c] = r[i]
        c++ ;
        }
   }
    r=(s*)realloc (r,c*sizeof(s));
    printf("student records after removed:");
    for (i=0;i<c;i++){
            printf ("student %d: \n",i+1)
            printf("roll no \n %d \n",r[i]rollno);
            printf("branch %s \n"r[i].branch);
            printf("branch:%s \n",r[i].branch);
             printf("dob :%s \n",r[i].dob);


             free(r);
             return 0;
    }