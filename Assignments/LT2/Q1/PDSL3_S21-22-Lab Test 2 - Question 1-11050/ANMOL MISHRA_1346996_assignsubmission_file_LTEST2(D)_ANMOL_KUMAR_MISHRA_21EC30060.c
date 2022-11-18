#include<stdio.h>
// NAME - ANMOL KUMAR MISHRA
// SECTION- 3
// ROLL NO- 21EC30060
// PDS LAB TEST 2


void subarray_sum(int arr[],int n) //DEFINING THE FUNCTION TO USE IN MAIN FUNCTION
{
    int mx_sum=arr[0],l=0,r=0; //DEFINING THE "MX_SUM", "ARR[0]8"
    for(int i=0;i<n;i++) 
    {
        for(int j=i;j<n;j++)
        {
            int sum=0; // DEFINING THE "SUM" VARAIABLE 
            for(int k=i;k<=j;k++)
            sum+=arr[k];
            if(sum>mx_sum) 
            {
                mx_sum=sum; // WHEN "SUM" > MX_SUM, THEN VALUE OF "I" STORED INTO "L",AND  VALUE OF "J" WILL BE "R"
                l=i;
                r=j;
            }
        }
    }
    printf("Max subarray sum: %d\n",mx_sum); // USE TO PRINT MAXIMUM SUM OF SUBARRAY
    printf("Subarray: "); // PRINT SUBARRAY
    for(int i=l;i<=r;i++)
    printf("%d ",arr[i]);
}
int main()
{
     int arr[20],n;

     printf("Enter N = "); // PRINTING OF "N"
     scanf("%d",&n); // TAKING INPUT FROM THE USER ABOUT SUBARRAY
     printf("Enter elements of the array: "); // PRINT LETTER "THE ELEMENTS OF ARRAY"
     for(int i=0;i<n;i++)
     scanf("%d",&arr[i]); // TAKING INPUT FROM THE USER
     subarray_sum(arr,n); // CALLING THE DEFINED FUNCTION "subarray_sum"
     return 0;
}