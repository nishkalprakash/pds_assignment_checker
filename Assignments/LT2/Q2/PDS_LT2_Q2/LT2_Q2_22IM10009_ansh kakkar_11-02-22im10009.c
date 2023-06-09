#include<stdio.h>
#include<string.h>
  struct record{
   char rollno[20];
   char branch[10];
   char date[11];
};
int main()
{
    int n,y,m;
    printf("enter the number of records to be stored\n");//number of record which are to be taken
    scanf("%d",&n);
    if(n>100||n<=0)
    {printf("invalid value of n\n");
    }//condition for invalidity
    else{struct record *p;
    p=(struct record *)malloc(n*sizeof(struct record));//allocation of memory for structure
    struct record arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr[i].rollno);
        scanf("%s",arr[i].branch);
        scanf("%s",arr[i].date);
    }
    printf("enter the year\n");
    scanf("%d",&y);

    }
    return 0;
}
//deleting part is not able to be done;

