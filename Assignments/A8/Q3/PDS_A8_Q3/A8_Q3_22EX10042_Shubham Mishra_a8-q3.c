#include<stdio.h>
#include<string.h>
typedef struct students{
  char rollno[10];
  float marks[3];
  float total;
}s;
int main(){
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    s ar[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the record of student %d\n ",i+1);
        printf("enter the roll no ");
        scanf("%s",ar[i].rollno);
        for(int j=0;j<3;j++)
        {
            printf("enter the marks in subject %d ",j+1);
            scanf("%f",&ar[i].marks[j]);

        }
        ar[i].total= ar[i].marks[0]+ar[i].marks[1]+ar[i].marks[2];

    }
    for(int i=0;i<n;i++)
    {
        s tem=ar[i];
        for(int j=i+1;j<n;j++)
        {
            if(ar[i].total<ar[j].total)
            {
                ar[i]=ar[j];
                ar[j]=tem;

            }

        }

    }
    for(int i=0;i<n;i++)
    {
        printf("the record of student %d\n ",i+1);
        printf("roll no %s \n",ar[i].rollno);

        for(int j=0;j<3;j++)
        {
            printf("the marks in subject %d ",j+1);
            printf(" %f \n",ar[i].marks[j]);

        }
        printf("the total marks is %f \n",ar[i].total);

    }

}
