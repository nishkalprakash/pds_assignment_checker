# include<stdio.h>
int main () {
      int x;
      int b=0;
      printf("Enter number of characters : ");
      scanf("%d", &x);
      char num[x];
      char Num[x];
      scanf("%s", num);
      scanf("%s", Num);
      for(int i=0; i<x; i++) {
      for(int j=0; j<x; j++) {

        if( num[i] == Num[j]) 
        b = b + 1;        
    }  
    } 
      if(b==x) {
        printf("Anagrams");
     }
     else {
        printf("Not Anagrams");
     } return 0;
     }
