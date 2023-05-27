/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 8
* Description : Storing the data
*/
#include<stdio.h>
typedef struct Student{
char Rollno[10];
float marks[3];
float total;
}stud;
stud swap(stud x,stud y)
{
    stud temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n,j;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    stud arr[n],temp;
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll no for student %d\n",i+1);
        scanf("%s",arr[i].Rollno);
        printf("Enter the marks for 3 subjects\n");
        scanf("%f %f %f",&arr[i].marks[0],&arr[i].marks[1],&arr[i].marks[2]);
        arr[i].total=arr[i].marks[0]+arr[i].marks[1]+arr[i].marks[2];
    }
    //printing the records
    printf("Student records :\n");
    for(int i=0;i<n;i++)
    {
      printf("Roll No : %s\n",arr[i].Rollno);
      printf("Marks : %.2f %.2f %.2f\n",arr[i].marks[0],arr[i].marks[1],arr[i].marks[2]);
      printf("Total : %.2f\n",arr[i].total);
    }
    //swapping the structures
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i].total<arr[j].total)
            {
                   temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

            }
        }

    }
    printf("Student records :\n");
    for(int i=0;i<n;i++)
    {
      printf("Roll No : %s\n",arr[i].Rollno);
      printf("Marks : %.2f %.2f %.2f\n",arr[i].marks[0],arr[i].marks[1],arr[i].marks[2]);
      printf("Total : %.2f\n",arr[i].total);
    }

    return 0;
}
