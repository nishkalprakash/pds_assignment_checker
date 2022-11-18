/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

/*The question given has an error with the examples used.
 In the examples used alpha value of Si is considered if Si divides Sk but in the qn it is clearly mentioned that
 alpha value of Si is considered if Sk divides Si.I am solving the following code as per qn i.e alpha value is considered if Sk divides Si*/

#include <stdio.h>

//defining the function taking the array and n as input
int maxalphavalue(int s[],int n){

    //defining parameters for using in the loop
    int i,k;

    //defining a new array to calculate alpha values of all elements
    int alpha[n];

    //initializing all alpha values to 0 before starting
    for(i=0;i<n;i++) alpha[i]=0;

    //checking for all the elements in Si if there exists Sk such that it is divisible by Sk.(k<i)
    for(i=1;i<n;i++){
            for(k=0;k<i;k++){
                //if Sk divides Si,increasing alpha value of corresponding Si by 1 else it would remain 0.
                if((s[i]%s[k])==0) alpha[i]++;
            }

    }
    //initializing a variable max to find out max value in the alpha array.
    int max=alpha[0];
    for(i=0;i<n;i++) {
        if(alpha[i]>max) max=alpha[i];
    }
    return max;
}

int main()
{
    int n,i;
    //taking number of elements input
    printf("enter number of elements in the array:"); scanf("%d",&n);
    //defining our array S with n elements
    int s[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)scanf("%d",&s[i]);

    //calling the function to get print the output
    printf("The max alpha value is %d",maxalphavalue(s,n));
return 0;
}

