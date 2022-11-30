/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-4
   Description-  program to display all factors
 */ 
#include<stdio.h>
int main()
{
 int n,i, factor;
 printf("enter a number from -999999 to 999999:");
 scanf("%d", &n);
printf("factors of %d are: \n", n);
 for(i=1;i<=n; i++){
 if(n%i==0){
factor= n/i;
printf("%d\n",factor);
}


}

return 0;
}
  
