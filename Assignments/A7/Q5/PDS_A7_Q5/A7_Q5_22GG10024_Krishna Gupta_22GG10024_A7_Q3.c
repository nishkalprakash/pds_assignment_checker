/*NAME - KRISHNA GUPTA
  SECTION-14
  ROLLNUMBER- 22GG10024
  ASSIGNMENT NUMBER -7
  PROBLEM - PRINTING THE NUMBER OF OUT OF ORDER NUMBERS IN AN ARRAY 
   */
#include <stdio.h>
int main()
{
int i,n,c=0;
printf("Enter the number of elements (0<n<10) : ");   // TAKING NUMBER OF ELEMENTS
scanf("%d",&n);
 int a[n];
for (i=0;i<n;i++)
    {
     scanf("%d",&a[i]);       // TAKING THE ELEMENTS
    }
 for (i=1;i<n-1;i++)
   {
     if (a[i]>a[i+1] || a[i]<a[i-1])     // CHECKING THE OUT OF ORDER NUMBERS
      {
        c++;
      }
    }
printf("out of order :%d" , c);        // PRINTING THE NUMBER OF OUT OF ORDERS
return 0;
} 
