/* sec:- 14

   roll:- 22AG30028

   name:- NISHANT KUMAR

   assignment:-7

   description:- QUESTION NUMBER 3
*/



#include <stdio.h>             // library function



int main() {                    // here program starts



int n,a[n],i,m;                   // variable declaration


//  for convineance try to take maximum 5 elements as input


printf("enter number of input in array: ");          //  printf function 


scanf("%d",&n);                                    //  input taken


for(i=0;i<n;++i) {                                 // input taken in array with the help of loop

scanf("%d",& a[i]);



}
 

printf("enter other element M which is different from above input M= ");      // other value m is taken

scanf("%d",&m);




/*  try to take input  in ascending order



*/










if (m<a[0])  
{ printf("%d %d %d %d %d %d",m,a[0],a[1],a[2],a[3],a[4]); }
if (m>a[0] && m<a[1])  
{ printf("%d %d %d %d %d %d",a[0],m,a[1],a[2],a[3],a[4]); }
if  (m>a[1] && m<a[2])
{ printf("%d %d %d %d %d %d",a[0],a[1],m,a[2],a[3],a[4]); }
if   (m>a[2] && m<a[3])
{ printf("%d %d %d %d %d %d",a[0],a[1],a[2],m,a[3],a[4]); }
if  (m>a[3] && m<a[4])
{ printf("%d %d %d %d %d %d",a[0],a[1],a[2],a[3],m,a[4]); }
if   (m>a[4])
{ printf("%d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],m); }





return 0;
}

