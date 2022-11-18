/*this program is to find the initial and gross cost and GST on wood */
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  float bp,gst,tp,w;
  char t;
  printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
  scanf("%c",&t);
  printf("Enter the weight of wood (in Kg.) you want: ");
  scanf("%f",&w);
  if(t=='n')
  {
    bp=1100*w;
    gst=bp/5;
    tp=bp+gst;
  }
  if(t=='s')
  {
    bp=780*w;
    gst=(0.15)*bp;
    tp=bp+gst;
  }
  printf("Base price = %f\n",&bp);
  printf("GST = %f\n",&gst);
  printf("Total price = %f\n",&tp);

}
