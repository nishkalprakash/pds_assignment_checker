
/* section : 2
 Name    : Pawan yadav
 Roll no : 22NA10030
 Que no  : 1 */

 #include <stdio.h>
  int main ()

  {
      int a,b,c,d,e,i,s;
      float marks ;
      printf ("Enter the number of students:\n");
      scanf ("%d",&a);
    for (  i=1;i<=a;i++){
        printf ("Enter the marks for student %d \n",i);
         printf ("Attendence [40]:\n");
          scanf (" %d",&b);
      printf ("CT [20]:\n") ;
       scanf (" %d",&c);
        printf ("Midsem [60]:\n");
     scanf ("%d",&d);
     printf ("Endsem [100]:\n");
        scanf ("%d",&e);


            marks = ((b*10/40.0)+(c*20/20.0)+(d*30/60.0)+(e*40/100.0)) ;
            if (marks >= 90){
            printf ("Student %d \n",i);
            printf ("Total marks : %f \n",marks);
            printf ("Grade : EX \n");
            }
            else if (marks<90 && marks>=80){
            printf ("Student %d \n",i);
            printf ("Total marks : %f",marks);
            printf ("Grade : A");
            }
             else if (marks<80 && marks>=70){
            printf ("Student %d \n",i);
            printf ("Total marks : %f",marks);
            printf ("Grade : B");
            }
             else if (marks<70 && marks>=60){
            printf ("Student %d \n",i);
            printf ("Total marks : %f \n",marks);
            printf ("Grade : C \n");
            }
             else if (marks<60 && marks>=50){
            printf ("Student %d \n",i);
            printf ("Total marks : %f \n",marks);
            printf ("Grade : D \n");
            }
             else if (marks<50 && marks>=35){
            printf ("Student %d \n",i);
            printf ("Total marks : %f\n",marks);
            printf ("Grade : P\n");
             }
              else if (marks<35){
            printf ("Student %d \n",i);
            printf ("Total marks : %f \n",marks);
            printf ("Grade : F \n");
              }
    }


   return 0 ;
  }

