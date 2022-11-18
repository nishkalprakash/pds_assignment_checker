
#include<stdio.h>
// NAME - ANMOL KUMAR MISHRA
// SECTION- 3
// ROLL NO- 21EC30060
// PDS LAB TEST 2
// QUESTION 4

#define MAX 100
struct STUDENT   // DEFINING THE STRUCTURE WITH NAME, SIRNAME, GENDER, MARKS AS INPUT
{
char Name[20];
char sirName[20];
char Gender[10];
float Marks;
};
void _details(struct STUDENT arrAY[],int n) // DEFING THE FUNCTION TO RUN THE STRUCTURE THAT WE DEFINE ABOVE
{
printf("Printing the student details: \n"); 
for(int i=0;i<n;i++)
{
printf("%s\n",arrAY[i].Name);
printf("%s\n",arrAY[i].sirName);
printf(" %s\n",arrAY[i].Gender);
printf(" %f\n",arrAY[i].Marks);
printf("\n");
}
}void best_RESULT(struct STUDENT arrAY[],int n) 
{
int p=0;
int j=-1;
for(int i=0;i<n;i++)
{
   if(arrAY[i].Gender[0]=='g')
   {
   if(arrAY[i].Marks>p)
   {
     p=arrAY[i].Marks;
    j=i;
    }
    } 
}
if(j==-1)   // IF J IS EQAUL TO -1 THEN THERE IS NO GIRL DATA ENTERED
printf("No Girl Present Here.\n");
else
printf("Best Girl Student: %s %s",arrAY[j].Name,arrAY[j].sirName);
}

int main()
{
struct STUDENT arrAY[MAX];
int n;
printf("Enter number of students: ");
scanf("%d",&n);
printf("Enter the student details: \n");

for(int i=0;i<n;i++)  // FOR LOOP FOR PRINTING THE NAME, SIRNAME, GENDER, MARKS
{
    scanf("%s",arrAY[i].Name);
    scanf("%s",arrAY[i].sirName);
    scanf("%s",arrAY[i].Gender);
    scanf("%f",&arrAY[i].Marks);
}

printf("\n");
_details(arrAY,n);
printf("\n");
best_RESULT(arrAY,n);
}

