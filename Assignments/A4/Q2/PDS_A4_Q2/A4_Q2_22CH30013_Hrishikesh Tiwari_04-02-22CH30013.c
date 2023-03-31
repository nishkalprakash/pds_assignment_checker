/*
Section 2
rOLL NO : 22CH30013
 NAME : Hrishikesh Tiwari
Assignment : 4
Program to grade and calculate marks
*/

#include<stdio.h>
int main()
{ int n , a, ct , ms , es , i=1 , j=1 ,x ;
  double total;

    printf("Enter the number of students: ");
    scanf("%d",&n); x=n;
    while(n>0){
       printf("Enter the marks of student %d : ",i) ;
       printf("Attendance[40]: ");
       scanf("%d", &a);
       if(a>40 || a<0)
       {
           printf("Wrong input\n");
           printf("Enter Again\n");
           scanf("%d",&a);
       }
       printf("CT[20]: ");
       scanf("%d", &ct);
       if(ct>20 || ct<0)
       {
           printf("Wrong input\n");
           printf("Enter Again\n");
           scanf("%d",&ct);
       }

       printf("Mid-sem [60]: ");
       scanf("%d", &ms);
       if(ms>60 || ms<0)
       {
           printf("Wrong input\n");
           printf("Enter Again\n");
           scanf("%d",&ms);
       }

       printf("End-sem[100]: ");
       scanf("%d", &es);
       if(es>100 || es<0)
       {
           printf("Wrong input\n");
           printf("Enter Again\n");
           scanf("%d",&es);
       }

       i++ ;
        --n;
    }

    total = 0.1*a + 0.2*ct + 0.3* ms + 0.4* es ;




for (j=1;j<=x ; j++)  {
        printf("Student : %d\n",j);
         printf("Total marks : %lf\n", total);
         if(total>=90) printf("grade EX\n");

   else if(total>=80 && total <90) printf("grade A\n");
    else if(total>=70 && total <80) printf("grade B\n");
        else if(total>=60 && total <70) printf("grade C\n");
      else if(total>=50 && total <60) printf("grade D\n");
    else if(total>=35 && total <50) printf("grade p\n");
 else if(total<35) printf("grade F\n");
}

    return 0;

}
