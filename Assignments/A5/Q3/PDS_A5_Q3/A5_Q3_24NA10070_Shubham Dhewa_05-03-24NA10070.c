#include <stdio.h>

int main (){
int i, m, n;
char H[n], N[m];

printf("Enter the value of n : ");
scanf("%d", &n);
if(n>100) printf("Error : %d>100\n", n);
else{ printf("Enter the binary pattern Haystack: ");

      for(i=0; i<n; i++){
      scanf("%c", &H[i]);
                         }
      printf("Haystack: ");
      for(i=0; i<n; i++)
      printf("%c", H[i]);
      printf("\n");
     }
 
printf("Enter the value of m : ");
scanf("%d", &m);    
if(m>10) printf("Error : %d>10\n", m);
else{ printf("Enter the binary pattern Needle: ");

      for(i=0; i<n; i++){
      scanf("%c", &N[i]);
                         }
      printf("Needle: ");
      for(i=0; i<n; i++)
      printf("%c", N[i]);
      printf("\n");
     }
    
return 0;
}
