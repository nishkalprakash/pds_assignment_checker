#include<stdio.h>
#include <stdlib.h>



int main()
{
int n,b,range; // n is number of array elements, b is the number of bins, and range is the length of each interval
int *a;
int x;



printf("Enter the numner of array elements :");
scanf("%d",&n);



//Dynamically allocating space for the array



a=(int *)malloc(n*sizeof(int));



printf("Enter the array elements : ");
for(int i=0;i<n;i++) scanf("%d",a+i);



printf("Enter the number of bins : ");
scanf("%d",&b);



// Dividing the given array into bins



// First we need to find the maximum and minimum element in the array to get the interval range



int r1,r2; // suppose the integers in the array range from r1-r2



r1=*(a);
r2=*(a); // Initializing them with the first element and not with 0 as if we take them as 0, r1 will remain 0



for(int i=0;i<n;i++)
{
if(*(a+i)>r2) r2= *(a+i);
if(r1>*(a+i)) r1= *(a+i);
}



// Caluclating the interval range of each bin :



range = (r2-r1+1)/b ; // r2-r1+1 is the number of elements as dividing by b to get the number of elements in each range



// Dividing the interval into bins :



// First we need to find out the number of elements in each bin, let it be stored in a array named count



int *count;



count=(int *)malloc(b*sizeof(int)); // Since there are 3 bins we allocated space to store 3 integers



for(int i=0;i<b;i++)
{
for(int j=0;j<n;j++)
{
// Transversing through the whole loop and if numbers in the particular range are found then the value of count is increased



if(*(a+j)>=r1+i*range && *(a+j)<= r1+(i+1)*range-1) *(count+i)+=1;
}



}



// Now that we know the number of elements in each range we can dynamically allocte spaces for each of them



int **bin;



bin=(int **)malloc(b*sizeof(int*)); // First Dynamically allocating space for 3 bins



for(int i=0;i<b;i++)
{
*(bin+i) =(int *)malloc(*(count+i)*sizeof(int)); // Allocating space of each interval for the respective bins
}



// Now sorting the numbers into their respective bins



for(int i=0;i<b;i++)
{
for(int j=0,x=0;j<n;j++)
{



if(*(a+j)>=r1+i*range && *(a+j)<= r1+(i+1)*range-1)
{
*(*(bin+i)+x) = *(a+j);
x++;
}
}
}



// Printing the final result



for(int i=0;i<b;i++)
{
printf("bin %d -> ",i+1);
for(int j=0;j<count[i];j++)
{
printf("%d,",*(*(bin+i)+j));
break;
}
printf("\b Number of elements in bin %d = %d\n",i+1,count[i]);
}



return 0;



}
