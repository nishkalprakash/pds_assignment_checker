//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>

int main()
{
  int dist, hr, dfare, rfare;
  printf("Enter the total distance travelled in taxi");
  scanf("%2d",&dist);
  if (dist<=8){dfare=20;}
  if ((dist>8)&&(dist<=12)){dfare=20+10*(dist-8);}
  if ((dist>12)&&(dist<=16)){dfare=60+8*(dist-12);}
  if ((dist>16)&&(dist<=20)){dfare=92+6*(dist-16);}
  if (dist>20){dfare=116+5*(dist-20);}
  printf("\nYour fare due to distance travelled is %d",dfare);

  printf("\nEnter the hours retained in taxi");
  scanf("%2d",&hr);
  if (hr<1){rfare=0;}
  if ((hr>=1)&&(hr<=12)){rfare=200;}
  if ((hr>12)&&(hr<=24)){rfare=500;}
  if (hr>24){rfare=500+(((hr-24)/24)+1)*300;}
  printf("\nYour rental fee is %d",rfare);

  printf("\nYour total taxi fare is %d",rfare+dfare);
  return 0;
}
  
  
  
  
