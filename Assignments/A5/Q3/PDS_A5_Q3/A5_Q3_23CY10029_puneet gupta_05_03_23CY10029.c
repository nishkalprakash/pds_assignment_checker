#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int roll[10],n,i,j,k,l;
	float cgpa[10],sum=0;

printf("enter the number of student\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter the roll number of student\n");
scanf("%d",&roll[i]);

{

printf("enter the cgpa of student\n");
scanf("%f",&cgpa[i]);
}
sum=sum+cgpa[j];
        }
printf("rollnumber    cgpa\n");
for(j=0;j<n;j++)
printf("%d\t\t%f\t\n",roll[j],cgpa[j]);
float avg= sum/n;
printf("average cgpa of the students%f\n",avg);

for(k=0;k<n-1;k++){
for(l=k+1;l<n;l++)
if (cgpa[k]==cgpa[l]){
printf("identical cgpa are %f  %f\n",cgpa[k],cgpa[l]);
printf("identical cgpa students roll number are %d  %d\n",roll[k],roll[l]);
}

}
return 0;

}
