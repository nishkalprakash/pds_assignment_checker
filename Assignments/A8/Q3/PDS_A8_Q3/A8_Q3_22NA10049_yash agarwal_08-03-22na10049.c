/*
yash agarwal
22na10049
sec 2
*/
#include <stdio.h>
#include <stdlib.h>
struct students
{
  char RollNo[10];
  float marks[3];
  float total;
};

int main()
{
  struct students *p;
  int size;
  printf("Enter the number of records: ");
  scanf("%d",&size);

  p=(struct students *)malloc(size*sizeof(struct students));  //allocating memory
  for(int i=0;i<size;i++)
  {
    scanf("%s",(p+i)->RollNo);  // input
    for(int j=0;j<3;j++)
    {
       scanf("%f",&(p+i)->marks[j]);
       (p+j)->total +=(p+i)->marks[j];
    }
  }


  //sorting
  struct students t;
  for(int i=0;i<size;i++)
    {
       for(int j=0;j<size;j++)
       {
         if((p+j)->total < (p+j+1)->total)
         {
            t = *(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=t;

         }

       }

    }

    printf("Student records\n");
    printf("Sorted student records");

    for(int i=0;i<size;i++)
    {
        printf("\n Rollno : %s\n",(p+i)->RollNo);  //output
        printf(" Marks :");
       for(int j=0;j<3;j++)
       {
        printf(" %f",(p+i)->marks[j]);
       }
       printf("\n Total : %f",(p+i)->total);

    }


}
