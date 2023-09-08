//roll no: 23CE30018
// name: Karina Dhaka
#include<stdio.h>
int main()
{
  int d,h,fair;
  printf("enter the distance travelled (in km) :");
  scanf("%d",&d);
  printf("enter the hours the taxi was retained:");
  
  scanf("%d",&h);
  if(h>0&&h<1){
    if(d>0&&d<=8){
      printf("fair=20");
    }
    else if(d>8&&d<=12){
      printf("fare=%d\n",20+(d-8)*10);
    }
    else if(d>12&&d<=16){
      printf("fare=%d\n",20+4*10+(d-12)*8);
    }
    else if(d>16&&d<=20){
      printf("fare=%d\n",20+4*10+4*8+(d-16)*6);
    }
    else {
      printf("fair=%d\n",20+4*10+4*8+4*6+(d-20)*5);
    }
 
  
  }
    
   
  else if(h>10&&h<12){
    if(d>0&&d<=8){
      printf("fair=%d\n",20+200);
    }
    else if(d>8&&d<=12){
      printf("fare=%d\n",20+(d-8)*10+200);
    }
    else if(d>12&&d<=16){
      printf("fare=%d\n",20+4*10+(d-12)*8+200);
    }
    else if(d>16&&d<=20){
      printf("fare=%d\n",20+4*10+4*8+(d-16)*6+200);
    }
    else {
      printf("fair=%d\n",20+4*10+4*8+4*6+(d-20)*5+200);
    }
    
    
    }
  
  else {
    if(d>0&&d<=8){
      printf("fair=%d\n",20+300);
    }
    else if(d>8&&d<=12){
      printf("fare=%d\n",20+(d-8)*10+300);
    }
    else if(d>12&&d<=16){
      printf("fare=%d\n",20+4*10+(d-12)*8+300);
    }
    else if(d>16&&d<=20){
      printf("fare=%d\n",20+4*10+4*8+(d-16)*6+300);
    }
    else{
      printf("fair=%d\n",20+4*10+4*8+4*6+(d-20)*5+300);
    }
  }
    return 0;
}
