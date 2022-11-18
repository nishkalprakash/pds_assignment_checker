/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>


//function to rearrange 3 numbers by taking their address as pointers p,q,r
void rearrange(int *p,int *q,int *r){
    //assigning parameters to run the loop.
    int i,j,t;
    //creating an array of three elememts to sort the input values
    int a[3];
    a[0]=*p;a[1]=*q;a[2]=*r;

    //sorting the array in increasing/non-decreasing order
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(a[i]>a[j]){
                t=a[i];a[i]=a[j];a[j]=t;//used temporary variable t to switch positions
            }
        }
    }
    //after sorting the array,reassigning back the values to a,b,c without changing their address.
    *p=a[0];*q=a[1];*r=a[2];
}

int main()
{

    //taking input of a,b,c
    int a,b,c;
   printf("enter a:"); scanf("%d",&a);
   printf("enter b:"); scanf("%d",&b);
   printf("enter c:"); scanf("%d",&c);

   //printing address,values initially
   printf("-----before function call-----");
   printf("\nAddress of a= %u\nAddress of b= %u\nAddress of c= %u\n",&a,&b,&c);
   printf("values of a,b,c=%d,%d,%d\n",a,b,c);

   //calling the function
   rearrange(&a,&b,&c);

//printing address,values after calling the function
 printf("-----after function call-----");
 printf("\nAddress of a= %u\nAddress of b= %u\nAddress of c= %u\n",&a,&b,&c);
 printf("values of a,b,c=%d,%d,%d",a,b,c);



    return 0;
}

