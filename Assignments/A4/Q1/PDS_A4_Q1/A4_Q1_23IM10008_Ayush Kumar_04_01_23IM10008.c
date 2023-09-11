#include<stdio.h>
//Name AYUSH KUMAR
//Roll 23IM10008
int main(){
  int a,b;
  printf("Total kilometres travelled");
  scanf("%d", &a);
  printf("Total hours taken");
  scanf("%d", &b);
  //for knowing hours data
  if(b<1){
    printf("No rent is charged");
  }
  else if ((b>=1) && (b<=12){
      printf("The fair is charged at the rate of Rs.200/-");
    }
    else if ((b>12)&& (b<24)){
      printf("The fair is incremented at the rate of Rs.300/-");
    }
    else (b>=24){
      printf("The fair is charged additionally Rs.300/-for each day");
    }
   \\for computing final fare value
    if ((a<=8) && (b<1)){
      printf("Fare= %d",8);
    }
    else if ((a>8)&& (a<=12) && (b>=1)&& (b<=12)){
    printf("The fair is equal to=" (a*10)+200);
    }
    else if ((a>12) && (a<=16) && (b>12)&& (b<24)){
      printf ("The fair is equal to="(8*a)+ 500);
    }
    else if ((a>16) && (a<=20)) && (b>=24)){
    printf (" The fair is equal to"-  (6*a)+ 300));
}
 else ((a>20)){
	printf ("The fair is equal to"- (5*a));
      }
return 0;
}
     
  
  
