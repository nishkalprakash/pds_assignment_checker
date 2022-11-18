
/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#define MAX 10
 typedef struct
{
  char name[20];
  char surname[20];
  char gender[4];
  float marks;
}student;
void input(student a[],int n);
void print(student a[],int n);
void best_girl(student a[],int n);
int main()
{ int n;
float max;
student a[MAX];
printf("enter the no.of students");
scanf("%d",&n);
input(a,n);
print(a,n);
best_girl(a,n);

return(0);
}
void input(student a[],int n){ int i;    // function for taking input
    for ( i = 0; i < n; i++)
{
    scanf("%s %s",a[i].name,a[i].surname);
   scanf("%s",a[i].gender);
    scanf("%f",a[i].marks);  }

}
void print(student a[], int n){ int i;  //function for printing input
    for ( i = 0; i < n; i++)
{
    printf("%s %s",a[i].name,a[i].surname);
    printf("%s",a[i].gender);
    printf("%f",a[i].marks);  }
}
void best_girl(student a[],int n){ int i ;float max=0.0;   //function for finding the best girl
for ( i = 0; i < n; i++){
    if (a[i].gender=="girl")
    {
       if (a[i].marks>max)
       {
          max=a[i].marks;
       }

    }

for ( i = 0; i < n; i++){
    if (max==a[i].marks)
    {
       printf(" best girl student is %s %s",a[i].name,a[i].surname); /* code */
    }

}
}
