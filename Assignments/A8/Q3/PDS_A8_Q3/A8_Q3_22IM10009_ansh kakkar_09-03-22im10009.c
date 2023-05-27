#include<stdio.h>
typedef struct student{
  char rollno[10];
  float marks[3];
  float total;
  } record;
int main()
{
    int n,i=0;
    scanf("%d",&n);
    record *p;
    p=(record *)malloc(n*sizeof(record));

    while(i<n)
    {
        scanf("%s",p[i].rollno);
        for(int j=0;j<3;j++)
        {
            scanf("%f",&p[i].marks[j]);
        }
        i++;
    }
    for(int r=0;r<n;r++)
    {
        p[r].total=0;
        for(i=0;i<3;i++)
        {
            p[r].total+=p[r].marks[i];
        }
    }
    record sort[n];
    float temp;
    for(int r=0;r<n;r++)
    {
        for(int j=0;j<n-r-1;j++)
        {
            if(p[j].total>p[j+1].total)
            {
                temp = p[j].total;
                p[j].total=p[j+1].total;
                p[j+1].total=temp;


            }
        }
    }
    printf("sorted students record\n");
    printf("student records\n");
    for(int r=n-1;r>=0;r--)
    {
        printf("roll no.: %s \n",p[r].rollno);
        printf("marks");
        for(int s=0;s<3;s++)
        {
            printf("%f\n",p[r].marks[s]);
        }
        printf("total%f",p[r].total);
    }


    return 0;

}
