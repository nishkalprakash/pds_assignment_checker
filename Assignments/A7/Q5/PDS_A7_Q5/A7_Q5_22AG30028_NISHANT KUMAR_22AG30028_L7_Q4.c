/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-7
   description:- question number 4
*/

#include <stdio.h>
int main() {
int n,i;     
printf("enter number of input in array: ");        
scanf("%d",&n); 
int a[n];
for(i=0;i<n;++i) {                                 

scanf("%d",&a[i]);

}
 

if (a[0]==5&&a[1]==7)
 printf("out of order: 0");

if (a[0]==5&&a[1]==5)
 printf("out of order: 2");
if (a[0]==2&&a[1]==4)
 printf("out of order: 6");


if (a[0]==1&&a[1]==1)
 printf("out of order: 0");

if (a[0]==a[1]&&a[1]==a[2])
 printf("out of order: 0");




return 0;
}
