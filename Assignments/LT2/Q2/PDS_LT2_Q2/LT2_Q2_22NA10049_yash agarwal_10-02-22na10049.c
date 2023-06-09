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
  char branch[3];
  char dob[11];
};

int main()
{
  struct students *p;   //structures
  int size;
  printf("Enter the number of records: ");
  scanf("%d",&size);
  if(size>=100)
  {
      printf("Invalid value of N");
      return 0;
  }

  p=(struct students *)malloc(size*sizeof(struct students));  //allocating memory

  for(int i=0;i<size;i++)
  {
    scanf("%s \n",p[i].RollNo);
    scanf("%s \n",p[i].branch);
    scanf("%s \n",p[i].dob);
     // input
       //gets((p+i)->RollNo);
        //gets((p+i)->branch);
        //gets((p+i)->dob);

  }

  int year;
  int m=0;
  //gets(year);
  scanf("%d",&year);
  //printf("year %d",year);

   for(int i=0;i<size;i++)
    {

        int y=(p[i].dob[6]-48)*1000+(p[i].dob[7]-48)*100+(p[i].dob[8]-48)*10+(p[i].dob[9]-48);
        if(y<year)
        {
            m++;
            printf("Deleted Record : ");
            printf("%s %s %s\n",(p+i)->RollNo,(p+i)->branch,(p+i)->dob);   //deleted records

        }
    }

        if(m==0)
        {
        printf("No records deleted\n");    //statemenet
        }


        printf("m = %d,n-m = %d",m,size-m);

  printf("\n Remaining records :\n");  //output

    for(int i=0;i<size;i++)
    {
        int y=(p[i].dob[6]-48)*1000+(p[i].dob[7]-48)*100+(p[i].dob[8]-48)*10+(p[i].dob[9]-48);   //calulating the year from input
        if(y>=year)
        {
        printf("%s ",(p+i)->RollNo);  //output
        printf("%s ",(p+i)->branch);
        printf("%s \n",(p+i)->dob);
        }


    }
    //here i have tried to reallocate the memory but it is showing segementation fault may be beacuse it is not able to find the sufficient memory
    p=(struct students *)realloc(size-m,size*(sizeof(struct students *)));



    /*
    char ch[4]=p[0].dob[6]+p[0].dob[7]+p[0].dob[8]+p[0].dob[9];
    printf("%s",ch);*/
    //int y=(p[0].dob[6]-48)*1000+(p[0].dob[7]-48)*100+(p[0].dob[8]-48)*10+(p[0].dob[9]-48);
    //printf("here %d",y);


}
