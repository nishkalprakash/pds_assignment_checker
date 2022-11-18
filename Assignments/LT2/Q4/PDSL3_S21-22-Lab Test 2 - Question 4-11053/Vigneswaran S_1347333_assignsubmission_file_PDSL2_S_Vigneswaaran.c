/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>



typedef struct
{
    char name[20];
    char gender[10];
    float mark;
    }STUDENT;


int girlornot(char S[]){//checks if its girl
 char girl[]="girl";
 for(int i=0;i<4;i++) if(girl[i] != S[i]) return 0;
 return 1;
}

STUDENT bestgirl(STUDENT S[],int p)
{
    float max=0.0;
    for(int j = 0; j < p; j++)
    {
        int gender=girlornot(S[j].gender);//if girl
        if (gender ==1 && S[j].mark>max)
        {
            max=S[j].mark;//find the max mark
        }
    }
        for(int j = 0; j < p; j++)//to print the girl with max mark
    {
        int gender=girlornot(S[j].gender);
        if (gender == 1 && S[j].mark==max)
        {
            return S[j];
        }}
    STUDENT x; //if no case is matching
    x.name[0] = '\0';
    x.gender[0] = '\0';
    x.mark = 0.0;

    return x;

}

int main()
{
    STUDENT student[100];
    int n;

    printf("Enter the no. of students in class: ");
    scanf("%d",&n);
    printf("Enter the name,gender,marks of the students: ");
    for(int i = 0; i < n; i++){
            scanf("%s  %s",student[i].name,student[i].gender);

            scanf("%f",&student[i].mark);
    }
    STUDENT name_girl = bestgirl(student,n);//function call

    printf("%s, %s, %f\n",name_girl.name,name_girl.gender,name_girl.mark);


}
