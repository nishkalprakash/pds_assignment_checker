#include <stdio.h>
int main() {
    printf("enter a number:");
    int N;
    scanf("%d", &N);
    if(N<=0){
        printf(" N is invalid");
        }
    else{ 
          int a,b,c;
          a=0,b=1;
          for(int i=0;i<N;i++){
                        c=a-b;
                        printf("%d ",c);
                        a=b;
                        b=c;
            }
          }  
  }          
