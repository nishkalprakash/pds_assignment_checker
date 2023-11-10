// 23AG30019 //
// Khyatish Bhagat //
// Set A //

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stud{
  unsigned int roll;
  char name[20];
  int points;
} badminton[10],chess[10],carrom[10],tt[10],tmp[30];



  
void RunnersUp(struct stud badminton[10],struct stud chess[10],struct stud carrom[10],struct stud tt[10], struct stud tmp[30],int n1,int n2,int n3 ,int n4)
{}

	       
  int main()
{
  int n1,n2,n3,n4 ;
  
printf(" How many students have participated in badminton\n");
scanf("%d",&n1);
printf(" How many students have participated in chess\n");
scanf("%d",&n2);
printf(" How many students have participated in carrom\n");
scanf("%d",&n3);
printf(" How many students have participated in tt\n");
scanf("%d",&n4);

 printf("\n");
//for badminton//
 printf("For Badminton: Enter the details of students\n");
 for(int i=0;i<n1;i++)

  {printf ("Enter roll no :\n");
    scanf("%d", &badminton[i].roll);
    printf(" Enter name :\n");
    scanf("%s",&badminton[i].name);
    printf("Enter points:\n");
    scanf("%d",&badminton[i].points);}

 
 printf("\n");
 
// for chess//
 printf("For Chess: Enter the details of students\n");
 for(int j=0;j<n2;j++)

  {printf ("Enter roll no :\n");
    scanf("%d", &chess[j].roll);
    printf(" Enter name :\n");
    scanf("%s",&chess[j].name);
    printf("Enter points:\n");
    scanf("%d",&chess[j].points);}

  printf("\n");
// for carrom//
  printf("For Carrom: Enter the details of students\n");
for(int k=0;k<n3;k++)

  {printf ("Enter roll no :\n");
    scanf("%d", &carrom[k].roll);
    printf(" Enter name :\n");
    scanf("%s",&carrom[k].name);
    printf("Enter points:\n");
    scanf("%d",&carrom[k].points);}

 printf("\n");
// for tt/
  printf("For TT: Enter the details of students\n");
 for(int l=0;l<n4;l++)

  {printf ("Enter roll no :\n");
    scanf("%d", &tt[l].roll);
    printf(" Enter name :\n");
    scanf("%s",&tt[l].name);
    printf("Enter points:\n");
    scanf("%d",&tt[l].points);}

 printf("\n");
 printf ("BADMINTON\n\n");
 for(int i=0;i<n1;i++){
   printf("Roll No : %d\n",badminton[i].roll);
   printf("Name: %s \n",badminton[i].name);
   printf("Points: %d \n",badminton[i].points);
    printf("\n");
 }
 

  printf("\n");
 printf ("CHESS\n\n");
 for(int i=0;i<n2;i++){
   printf("Roll No : %d\n",chess[i].roll);
   printf("Name: %s \n",chess[i].name);
   printf("Points: %d \n",chess[i].points);
    printf("\n");
 }

  printf("\n");
 printf ("CARROM\n\n");
 for(int i=0;i<n3;i++){
   printf("Roll No : %d\n",carrom[i].roll);
   printf("Name: %s \n",carrom[i].name);
   printf("Points: %d \n",carrom[i].points);
    printf("\n");
 }

  printf("\n");
 printf ("TT\n\n");
 for(int i=0;i<n4;i++){
   printf("Roll No : %d\n",tt[i].roll);
   printf("Name: %s \n",tt[i].name);
   printf("Points: %d \n",tt[i].points);
    printf("\n");
 }
 


 findChamp( badminton,chess,carrom, tt, tmp,n1, n2, n3 ,n4 );

 RunnersUp( badminton,chess,carrom, tt, tmp,n1, n2, n3 ,n4 );

 
   return 0; 
 
   }



