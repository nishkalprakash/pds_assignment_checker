#include<stdio.h>
#include<stdlib.h>
typedef struct st {
 char rollno[10] ;
 float marks[3] ;
 float totalm ;
} student ;
int main()
{
 student *s ;
 int n ;
 printf("enter number of students\n");
 scanf("%d",&n);
 s=(student*)malloc(n*sizeof(student));
 for(int i=0;i<n;i++)
    {
      scanf("%s",s[i].rollno);
      scanf("%f",&s[i].marks[0]);
      scanf("%f",&s[i].marks[1]);
      scanf("%f",&s[i].marks[2]);
      s[i].totalm=(s[i].marks[0]+s[i].marks[1]+s[i].marks[2]);
    }
    for(int i=1;i<n;i++)
        {
            int k=i ;
          while((s[k].totalm>s[k-1].totalm)&&(k>0))
            {
              student x;
          x=s[k] ;
          s[k]=s[k-1];
          s[k-1]=x ;
          k-- ;
            }
        }
        for(int i=0;i<n;i++)
            {
              printf("\n Roll no:%s",s[i].rollno);
        printf("\n marks: %f %f %f",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
        printf("\n total marks:%f",s[i].totalm);
            }
            return 0 ;
}
