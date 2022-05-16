#include<stdio.h>
main()
{
char choice;
float weight,bprice,gst,tp;
printf("\nEnter the type of wood (n for natural wood, s for synthetic wood): ");
scanf("%s",&choice);
printf("\nEnter the weight of wood (in Kg.) you want:");
scanf("%f",&weight);
if(choice=='n')
{
    bprice=weight*1100.00;
printf("\nBase price= %f",bprice);
gst=bprice*0.20;
printf("\nGST= %f",gst);
tp=gst+bprice;
printf("\ntotal price= %f",tp);
}
else if(choice=='s')
{
    bprice=weight*780.00;
printf("\nBase price= %f",bprice);
gst=bprice*0.15;
printf("\nGST= %f",gst);
tp=gst+bprice;
printf("\ntotal price= %f",tp);
}


}
