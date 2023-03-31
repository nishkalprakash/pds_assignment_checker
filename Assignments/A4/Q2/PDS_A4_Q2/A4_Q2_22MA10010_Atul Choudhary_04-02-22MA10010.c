#include<stdio.h>
int main()
{
   /*
    * Section 2
    * Name : Atul Choudhary
    * Roll no. 22MA10010
    * Assignment: 4
    * Description: Numerio-pyramid
  */
  int N, at,ct,ms,es,total;
  printf("Enter the number of students :");
  scanf("%d", &N);
  for(int i=1;i<=N;i++){


    printf("Enter the marks for student: %d\n" ,i );
    printf("Attendance [40]:");
    scanf("%d" ,&at);
    printf("CT [20]:");
    scanf("%d" ,&ct);
    printf("Midsem [60]:");
    scanf("%d" ,&ms);
    printf("Endsem [100]:");
    scanf("%d" ,&es);

    if((at<0)||(at>40))
    {
        printf("Given marks are out of range");

    }
    else
      {
          at=at/4;

      }
       if((ct<0)||(ct>20))
    {
        printf("Given marks are out of range");

    }
    else
      {
          ct=ct;

      }
       if((ms<0)||(ms>60))
    {
        printf("Given marks are out of range");

    }
    else
      {
          ms=ms/2;

      }
       if((es<0)||(es>100))
    {
        printf("Given marks are out of range");

    }
    else
      {
          es=4*es/10;

      }


     total=at+ct+ms+es;
     printf("student %d \n",i );
     printf("Total marks of student is %d \n" ,total);
     printf("Grade: \n");
     if(total>90)
     {
         printf("Ex\n\n");

     }
     else if(80<=total && total<90)
     {
         printf("A\n\n");
     }

     else if(70<=total && total<80)
     {
         printf("B\n\n");
     }

      else if(60<=total && total<70)
     {
         printf("C\n\n");
     }

     else if(50<=total && total<60)
     {
         printf("D\n\n");
     }

     else if(35<=total && total<50)
     {
         printf("P\n\n");
     }

     else
          {
              printf("F\n\n");

          }


  }


  return 0;


}
