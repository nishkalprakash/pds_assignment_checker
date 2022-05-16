#include<stdio.h>
/*name-Chetna
  dep-CSE
  roll no.-21CS10019
  package-code blocks*/

  int main(){
      char type;
      float w,bp,gst,total;

      printf("Enter the type of wood(n for natural wood,s for synthesis wood);");
      scanf("%c",&type);

      printf("Enter the weight of wood(in Kg) you want:");

      scanf("%f",&w);
      if(type=='n')bp=1100*w;
      else bp=780*w;

      if(type=='n')gst=bp/5;
      else gst=(bp*3)/20;
      total=gst+bp;

      printf("Base price=%.2f\n",bp);
      printf("GST=%.2f\n",gst);
      printf("Totalprice=%.2f",total);

  }
