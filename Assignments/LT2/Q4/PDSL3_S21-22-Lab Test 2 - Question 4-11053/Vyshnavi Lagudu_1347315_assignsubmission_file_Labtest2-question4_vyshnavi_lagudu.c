/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments: max is 20,genders are boy and girl
*/
#include<stdio.h>
#define MAX 20
typedef struct{
    char name[20];
    char gender[5];
    float marks;
    }student;
void input(student s[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
        printf("\n");
        scanf("%s",s[i].name);
        scanf("%s",s[i].gender);
        scanf("%f",&s[i].marks);
        }
}
void print(student s[],int n)
{

    int i=0;
    for(i=0;i<n;i++){
       printf("\n");
       printf("%s-%s-%f",s[i].name,s[i].gender,s[i].marks);
       }
}
int topper(student s[],int n)
{
    int k=0,a;
    student top;
    top.marks=0;
    for(k=0;k<n;k++){
        if(top.marks<s[k].marks){
                                a=k;
                                }
    return(a);
}
}
main()
{
   student s[MAX];
   int n,i,top;
   printf("enter the no,of students:");
   scanf("%d",&n);
   printf("\nenter the student details:");
   input(s,n);
   printf("\nprinting the student records:");
   print(s,n);
   printf("\n");
   top=topper(s,n);
   printf("best %s student is %s",s[top].gender,s[top].name);
   return 0;
}
