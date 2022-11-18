#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/


int main()
{

 srand(time(0));

 int n;
 printf("Enter the value of n:\n");
 scanf("%d",&n);

 int k;
 printf("Enter the value of k:\n");
 scanf("%d",&k);

 int dist;
 float tot_d=0;

 for(int i=1; i<=k; i++){
     dist=0;
     for(int j=1; j<=n; j++){

      dist = dist *(rand() &1 ? -1 : 1);
     }

 tot_d = tot_d + dist*dist;

 }
   printf("%f",sqrt(tot_d/k));
   return 0;
}
