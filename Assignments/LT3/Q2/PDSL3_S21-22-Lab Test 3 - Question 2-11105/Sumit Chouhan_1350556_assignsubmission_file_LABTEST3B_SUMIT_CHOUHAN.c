#include<stdio.h>

int main ()
{int x,y,m,n;
char A[15],B[15];
printf("Enter the first polynomial as string : ");
scanf("%s",A);

printf("Enter the second polynomial as string : ");
scanf("%s",B);
for(x=0;x<5;x++)
if(A[x]='x')
    m=x;
for(y=0;y<5;y++)
 if(B[y]='x')
        n=y;





printf("The resultant polynomial after multiplication in the form of string is : %s * %s",A,B);
return 0;


}
