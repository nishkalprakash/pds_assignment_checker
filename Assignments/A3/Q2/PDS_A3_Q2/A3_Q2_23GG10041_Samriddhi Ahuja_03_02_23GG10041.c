// roll no <23GG10041>
//name:<samriddhi ahuja>
#include <stdio.h>
int main()
{
  int marks;
printf("marks of the student out of 100=\n");
 scanf("%d", &marks);
 if( marks>=90)
   {printf("grade = EX\n");}
 else
   if (marks>=80 && marks<=90)
 {printf("grade = A\n");}
 else
   if (marks>= 70 && marks<=80)
 {printf("grade = B\n");}
 else
   if  (marks>=60 && marks<=70)
 {printf("grade = C\n");}
 else
   if  (marks>=50 && marks<=60)
 {printf("grade = D");}
 else
   if (marks>=35 &&marks<=50)
 {printf("grade = P");}
 else
   {printf("grade = F");}
 return 0;
}
