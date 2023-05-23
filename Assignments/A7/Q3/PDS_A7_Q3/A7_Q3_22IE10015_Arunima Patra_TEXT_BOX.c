/sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-3
#include<stdio.h>
#include<string.h>
int main(){
   int n,m;char *str1, *str2;
   printf("Enter the value:");
   scanf("%d", &n);
   printf("Enter the value:");
   scanf("%d", &m);

   char**X= (char**)calloc(n, sizeof(char*));
   for(int i=0; i<n; i++){
    X[i]=(char*)calloc(100, sizeof(char));
   }
   char**Y= (char**)calloc(m, sizeof(char*));
   for(int i=0; i<m; i++){
    Y[i]=(char*)calloc(100, sizeof(char));
   }
  for(int i=0; i<n; i++){
     scanf("%[^\n]%*c", str1);
      for(int j=0; str1[j]!='\0'; j++){
        X[i][j]=str1[j];
      }



  }
   for(int i=0; i<m; i++){
     scanf("%[^\n]%*c", str2);
      for(int j=0; str2[j]!='\0'; j++){
        Y[i][j]=str2[j];
      }



  }

  char**Z= (char**)calloc(n+m, sizeof(char*));
   for(int i=0; i<n+m; i++){
    Z[i]=(char*)calloc(100, sizeof(char));
   }
   for(int i=0; i<n+m; i++){
     if(i<n){
        Z[i+1]=X[i+1];
     }
     else{
        Z[i+1]=Y[i+1-n];
     }
   }
return 0;
}