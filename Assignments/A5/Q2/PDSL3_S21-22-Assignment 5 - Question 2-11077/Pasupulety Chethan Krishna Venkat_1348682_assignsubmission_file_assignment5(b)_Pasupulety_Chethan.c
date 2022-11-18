/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    //taking no of elements input.
   int n,i,z;
   printf("Enter the number of elements in the array:"); scanf("%d",&n);

   //dynamically creating an array of n integers
   int *p;
   p=(int *)malloc(n*sizeof(int));

   //taking the array input
   printf("enter elements\n");
   for(i=0;i<n;i++){
    scanf("%d",p+i);
   }

   //taking no of bins input
   int b;
   printf("enter no of bins:"); scanf("%d",&b);

   //finding the highest element
   int max=p[0];
   for(i=0;i<n;i++){
        if(p[i]>max) max=p[i];

   }
   //initializing the number of bins
   int x=(max/b);

   //initializing the bin array to find elements in the bin
   int bin[b][100];
   //defining an array for no of elements in each bin
   int ele[b];
   //loop parameters
   int j,k=0;
   //filling the bin elements
   for(j=1;j<b+1;j++){
        for(i=0;i<n;i++){
            if(p[i]>(j-1)*x && p[i]<j*x+1) {bin[j-1][k]=p[i]; k++;}
        }
        ele[j-1]=k;
        k=0;

   }
   //printing the bin elements
   for(i=0;i<b;i++){
        printf("bin %d:",i+1);
   for(z=0;z<ele[i];z++){

    printf("%d, ",bin[i][z]);

   }
    printf("Number of elements =%d\n",ele[i]);
   }







    return 0;
}
