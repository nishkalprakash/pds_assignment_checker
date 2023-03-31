/* name- sandesh patil
   roll no-22MF10034
   sec-2
   q no-1
   assigment no-4
   */

#include<stdio.h>
int main()
{
    int N,i=0;
    float attendence,classtest,midsem,endsem,A,B,C,D,Z,Totalmarks;
    Z=Totalmarks;

        printf("enter the number of students \n");
        scanf("%d",&N);

         for(i=0;i<N;i=i+1)
         {
              printf("enter attendence marks \n");
              scanf("%f",&attendence);
              printf("enter classtest marks \n");
              scanf("%f",&classtest);
              printf("enter midsem marks \n");
              scanf("%f",&midsem);
              printf("enter endsem marks \n");
              scanf("%f",&endsem);


              A=(attendence/4);
              printf("The value of A is %f",A);
              B=(classtest);
              printf("The value of B is %f",B);
              C=(midsem/2);
              printf("The value of C is %f",C);
              D=(endsem*0.4);
              printf("The value of D is %f",D);

              Totalmarks = A+B+C+D;
              printf("Totalmarks is %f",Totalmarks);
            }

              if(Z>=90)
              {
                  printf("EX");
              }

              if(Z>=80 || Z<90)
              {
                  printf("A");
              }

              if(Z>=70 || Z<80)
              {
                  printf("B");
              }

              if(Z>=60 || Z<70)
              {
                  printf("C");
              }

              if(Z>=50 || Z<60)
              {
                  printf("D");
              }

              if(Z>=35 || Z<50)
              {
                  printf("P");
              }
              if(Z<35)
              {
                  printf("F");
              }



          return 0;
         }











