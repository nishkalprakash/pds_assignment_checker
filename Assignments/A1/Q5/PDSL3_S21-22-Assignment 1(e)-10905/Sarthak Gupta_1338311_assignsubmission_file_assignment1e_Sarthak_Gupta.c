#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define nw 1100
int main()
{float weight,b,gst,t;
char c;
printf("Enter the type of wood required(n/s)\n");
scanf("%c",&c);
printf("Enter the amount of wood(in kgs)required\n");
scanf("%f",&weight);
if(c=='n')
{b=1100*weight;
gst=0.2*b;
t=b+gst;
}
if(c=='s')
{b=780*weight;
gst=0.15*b;
t=b+gst;
}
printf("base price =%.2f\n",b);
printf("gst=%.2f\n",gst);
printf("total=%.2f\n",t);

return 0 ;
}