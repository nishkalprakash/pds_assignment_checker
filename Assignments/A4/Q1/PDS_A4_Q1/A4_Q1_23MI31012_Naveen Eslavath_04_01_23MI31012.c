#include <stdio.h>
int main()
{
  int kilo,hour,fair;
  printf("Enter the distance travelled by the vehicle: ");
  scanf("%d",&kilo);
  printf("Enter the hours the taxi was retained: ");
  scanf("%d",&hour);
  if(kilo<=8){
    printf("the fair is 20RS");
  }
  else if((kilo>8)&&(kilo<=12)){
    fair=20+(kilo-8)*10;
    printf("The taxi fair is %d RS",fair);
  }
  else if((kilo>12)&&(kilo<=16)){
    fair=60+(kilo-12)*8;
    printf("The taxi fair is %d RS",fair);
  }
  else if((kilo>16)&&(kilo<=20)){
    fair=92+(kilo-16)*6;
    printf("The taxi fair is %d RS",fair);
  }
  else {
    fair=116+(kilo-20)*5;
    printf("The taxi fair is %d RS",fair);
  }
  if(hour<1){
    printf("There is no rental");
  }
  else if((hour>=1)&&(hour<12)){
    printf("the rental of the taxi is 200 RS");
  }
  else if ((hour>=12)&&(hour<=24)){
    printf("The rental of the taxi is 500 RS");
  }
  else {
    printf("The rental of the taxi is 800 RS");
  }
  return 0;
}
  
  
