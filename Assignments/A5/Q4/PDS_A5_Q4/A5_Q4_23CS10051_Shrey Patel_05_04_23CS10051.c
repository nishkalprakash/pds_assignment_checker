//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>

int main()
{
int rollno[20],age[20],marks[20],marks1[20],age1[20],rollno1[20],min=1000;
for(int i=0;i<20;i++)
{
rollno[i]=rollno1[i]=rand()%1001+1000;
age[i]=age1[i]=rand()%11+15;
marks[i]=marks1[i]=rand()%101;
}
printf("Person with same age\n");
for(int i=0;i<20;i++)
{for(int j=i+1;j<20;j++)
{if(age1[i]*100==age1[j]*100 && age1[i]!=1000)
{printf("Rollno:%d Age:%d marks=%d \n",rollno[i],age[i],marks[i]);
printf("Rollno:%d Age:%d marks=%d \n",rollno[j],age[j],marks[j]);
for(int k=j+1;k<20;k++)
{if(age1[k]*100==age1[i]*100)
{printf("Rollno:%d Age:%d marks=%d \n",rollno[i],age[i],marks[i]);
 age1[k]=1000;}
}}}}
printf("\n Marks with same values\n"); 
for(int i=0;i<20;i++)
{for(int j=i+1;j<20;j++)
{if(marks1[i]*100==marks1[j]*100 && marks1[i]!=1000)
{printf("Rollno:%d Age:%d marks=%d \n",rollno[i],age[i],marks[i]);
printf("Rollno:%d Age:%d marks=%d \n",rollno[j],age[j],marks[j]);
for(int k=j+1;k<20;k++)
{if(marks1[k]*100==marks1[i]*100)
{printf("Rollno:%d Age:%d marks=%d \n",rollno[i],age[i],marks[i]);
 marks1[k]=1000;}
}}}}
printf("\nSorted marks\n");

for(int i=0;i<20;i++)
{for(int j=0;j<20;j++)
{
if(min>rollno[j])
{min=rollno[j];}
}
rollno1[i]=min;
for(int i=0;i<20;i++)
{if(rollno[i]==min)
rollno[i]=10000000;}
}


for(int i=0;i<20;i++)
{
printf("Roll no=%d Age=%d Marks=%d\n",rollno[i],age[i],marks[i]);}
return 0;
}
