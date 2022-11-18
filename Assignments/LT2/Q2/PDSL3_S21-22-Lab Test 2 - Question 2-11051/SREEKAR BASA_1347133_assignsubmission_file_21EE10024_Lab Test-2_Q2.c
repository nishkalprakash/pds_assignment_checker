/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_2
Question    : 2
*/

#include <stdio.h>

int maxAlphaValue(int s[],int n) // maxAlphaValue function with parameters - sequence and no.of integers in sequence //
{
    static int l=1; //leaving the starting element of sequence and using static to remember previous result //
    int k=0; //k - stores present alpha value //
    static int max=0; //static - to remember previous max. //
    int i;
    if(l>n) { return max;} // terminating condition //
    for(i=0;i<l;i++)
    {
        if( (s[i]%s[l])==0 && (s[i]/s[l])!=0 ) k++; // calculation of alpha value for particular l value i.e; 'i' in question //
    }
    if(l==1) max=k ;
    else
    {
        if(k>max) max = k ; // checking if new k is max. or not //
    }

    l++; // l - increament //
    maxAlphaValue(s,n); // Recursive Call //
}

int main()
{
    int i,j,k,n;
    int s[100];
    printf(" Enter no.of integers in sequence :"); //Taking no.of integers as input //
    scanf("%d",&n);
    printf(" Enter array : ");
    for(i=0;i<n;i++) scanf("%d",&s[i]); //Reading sequence of integers //
    k = maxAlphaValue(s,n); //calling function and getting max.alphaValue //
    printf(" The maximum Alpha value : %d",k);
    return 0;
}
