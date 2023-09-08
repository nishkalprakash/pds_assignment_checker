// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int fare=0,time,dist;
  printf("Enter the amount kilometers travelled and hours travelled:\n");
  scanf("%d %d",&dist,&time);
  int daysnum;
  daysnum = time/24;
  if (time >= 1 )
    fare+=200;
  if (time >= 12 )
    fare +=300;
  if (time >= 24)
    fare+= 300;
  fare += daysnum * 300;

  if(dist>0){
    fare +=20;
  }  
  if(dist > 8 && dist<=12 ){
    dist-=8;
    fare+=dist*10;
  }
  if(dist>12 && dist<=16){
    dist -=12;
    fare+=8*dist;
  }
  if(dist>16 && dist<=20){
    dist-=16;
    fare+=6*dist;
  }
  if(dist >20){
    dist-=20;
    fare+=dist*5;
  }
  printf("The Total fare will be %d\n",fare);
  return 0;
}
