/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
#include<limits.h>

int maxSubArraySum(int a[], int n)                      //defining a function so that we can call it in our main fucntion
{
	int max_so_far = INT_MIN, max_ending_here = 0;      //declaring the variables
	int start =0, end = 0, s=0;                        //declaring the variables

	for (int i=0; i< n; i++ )                         //for loop for evaluation of the largest element
	{
		max_ending_here += a[i];

		if (max_so_far < max_ending_here)            //if the value maximum so far is less than the max ending vaue we assigned it the Max Value
		{
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if (max_ending_here < 0)
		{
			max_ending_here = 0;
			s = i + 1;
		}
	}
    printf("Largest Sum=");
	printf("%d",max_so_far);
	printf("\n");
    max_ending_here=0,start =0, end = 0, s=0;
    printf("Sub-arrays=");
    for (int i=0; i< n; i++ )
	{
		max_ending_here += a[i];

		if (max_so_far == max_ending_here)
		{
		   start=s;
           end=i;
           if(s>0)
           printf("OR ");
           for(int i=start;i<=end;i++){
            printf("%d ",a[i]);
           }
		}
		if (max_ending_here < 0)
		{
			max_ending_here = 0;
			s = i + 1;
		}
	}

}

int main()                                  //main function
{
	int n;
    printf("Enter n:");
    scanf("%d",&n);                    //taking user input
    int a[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);               //taking inputs of the array by applying for loop
	int max_sum = maxSubArraySum(a, n);      //calling out the function we defined earlier
	return 0;
}
