#include <stdio.h>

int main(void) {
  char t;
  float w;
  printf ("Enter the type of wood you want(n for natural and s for synthetic):");
  scanf("%c",&t);
  printf("Enter the weight of wood you want:");
  scanf("%f",&w);
  float base , gst;
  if (t=='n'){
    base= w*1100;
    gst=w*1100*0.2;
   printf("Base price of your wood is %10.2f\n",base);
   printf("GST on your wood is %10.2f\n",gst);
    printf("Total price of your wood is %10.2f\n",(base+gst));
    }
    else if (t=='s'){
       base= w*780;
    gst=w*780*0.15;
   printf("Base price of your wood is %10.2f\n",base);
   printf("GST on your wood is %10.2f\n",gst);
    printf("Total price of your wood is %10.2f\n",(base+gst));
      }
  return 0;
}
