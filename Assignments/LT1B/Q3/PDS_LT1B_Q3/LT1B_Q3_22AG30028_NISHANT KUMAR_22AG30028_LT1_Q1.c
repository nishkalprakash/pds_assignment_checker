/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   question:- 1
   assignment:-LAB TEST
*/

#include <stdio.h>
int main() {
int n,i;
int a[6];

printf("enter a sequence of positive integer note you have to take only 6 positive integer");

for(i=0;i<6;i++){
scanf("%d",&a[i]);
}

if(a[0]>a[1]||a[0]>a[2]||a[0]>a[5]||a[0]>a[4]||a[0]>a[3])
{ printf("%d is the greatest integer",a[0]); }
break;

if(a[1]>a[0]||a[1]>a[2]||a[1]>a[5]||a[1]>a[4]||a[1]>a[3])
{ printf("%d is the greatest integer",a[1]); }
break;
if(a[0]>a[1]||a[0]>a[2]||a[0]>a[5]||a[0]>a[4]||a[0]>a[3])
{ printf("%d is the greatest integer",a[0]); }
break;
if(a[2]>a[1]||a[2]>a[0]||a[2]>a[5]||a[2]>a[4]||a[2]>a[3])
{ printf("%d is the greatest integer",a[2]); }
break;
if(a[3]>a[1]||a[3]>a[2]||a[3]>a[5]||a[3]>a[4]||a[3]>a[0])
{ printf("%d is the greatest integer",a[3]); }
break;
if(a[4]>a[1]||a[4]>a[2]||a[4]>a[5]||a[4]>a[0]||a[4]>a[3])
{ printf("%d is the greatest integer",a[4]); }
break;

if(a[5]>a[1]||a[5]>a[2]||a[5]>a[0]||a[5]>a[4]||a[5]>a[3])
{ printf("%d is the greatest integer",a[5]); }
break;



	
return 0;
}
