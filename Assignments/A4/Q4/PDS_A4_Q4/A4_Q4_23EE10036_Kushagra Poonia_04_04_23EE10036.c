//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int c = 0;
  int c1 = 0; int c2 = 0; int c3 = 0; int n = 0;
  int flag = 0;

  while(flag==0){
    printf("Enter a single digit:\n");
    scanf("%1d", &c);

    if(((c1 == 5 && c2 == 1) && n == 3) && c == 7){
      printf ("Pattern identified\n");
      return 0;
    }
    
    if(c==5 && n == 0){
      c1 = 5;
      n=1;
      continue;
    }
    
    if((c1 == 5 && c==1) && n == 1){
      c2 = 1;
      n=2;
    }
    else{
      c1 = 0;
      n = 0;
      continue;
    }
    
    printf("Enter a single digit:\n");
    scanf("%1d",&c);
    
    if((c1 == 5 && c2 == 1) && n == 2){
      n=3;
    }
    
  }
}
  
