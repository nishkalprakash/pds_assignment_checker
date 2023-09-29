//Roll No.: 23EC30056
//Name: Swaraj Dian
//Set: 1

#include<stdio.h>
int main()
{
  int s,n,i,d=1,j;  //s-scale factor, n-number of lines, d- printing the numbers, i,j are iterating variables
  printf("Enter Scale Factor in between[1,6]: ");            //taking user input
  scanf("%d",&s);
  printf("Enter Number of lines in between [1,10]: ");
  scanf("%d",&n);
  if ((n>0)&&(n<=10)&&(s>0)&&(s<=6))                  //checking if input is valid or not
    {
      for (i=1;i<=n;i++)     // iterating for each row
	  {
	    for (j=1;j<=i;j++)     // iterating for numbers to be printed in each line
	      {
		printf("%d",d);
		d++;
		if ((d>s+3))      //changing the number to 1 once the number in incremented to 3+s
		  d=1;
	      }
	    printf("\n");
	  }
    }
  else
    printf("Invalid Input Try Again");
  return 0;
}
