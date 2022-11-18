/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 4
Question : 1
*/

#include <stdio.h>


int possib(int a[],int l,int i,int j,int k) //possibilities function //
{
    static int m = 0;
    i = m ;

        for(j=i;j<l;j++) // from i to l //
        {
            for(k=j;k<l;k++) // from j to l //
            {
                printf(" %d%d%d \n",a[i],a[j],a[k]); // printing using loops for a value of 'i' //
            }
        }
    if(i==4) return 0; // stopping condition //
    m++ ;           // increment in i or m  for the next time as i will be m in next function call , since static 'm'//
    possib(a,l,i,j,k);

}

int main()
{
    int a[]={5,7,12,3},l,i=0,j=0,k=0; // inputing array a and defining l //
    printf(" Enter the length of combinations : ");
    scanf("%d",&l); // Reading l value //

    for(i=0;i<4;i++) printf("%d",&a[i]); // printing elements of array //

    k = possib(a,l,i,j,k); // Calling the function & recieving value 0 //
    if(k==0) printf(" End ! Above are all the permutations of array with repetition of desired length l ");
    return 0;
}





