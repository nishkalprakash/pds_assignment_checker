//Roll no. :23EE10056//
//Name :Ritwik Suresh//
#include<stdio.h>
int main()
{
  int dist,time,fare=20;
  printf("Enter the total no. of kms travelled and the no. of hours the taxi will be retained\n");
  scanf("%d%d",&dist,&time);
  if(dist>8)
    {
      dist=dist-8;
      if(dist<=4)
	fare = fare + dist*10;
      else{
	dist = dist - 4;
        fare = fare + 40;
	if(dist<=4)
	  fare = fare + dist*8;
	else{
	  dist = dist -4;
	  fare = fare+32;
	  if(dist<=4)
	    fare = fare+dist*6;
	  else{
	    dist = dist-4;
	    fare = fare+24+dist*5;
	  }
	}
      }
    }
  if(time>24)
    {
      if(time%24==0)
	fare = fare+ 300*(time/24);
      else
	fare = fare+ 300*(1+time/24);
    }
  else if(time>=12&&time<=24)
      fare = fare+300;
  else if(time>=1&&time<12)
    fare = fare+200;
  printf("Taxi fare = %d",fare);
  return 0;
}

      
      
