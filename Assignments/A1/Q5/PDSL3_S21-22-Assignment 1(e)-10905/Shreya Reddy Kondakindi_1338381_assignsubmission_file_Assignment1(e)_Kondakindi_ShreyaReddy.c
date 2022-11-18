#include <stdio.h>
/*Name:Kondakindi Shreya Reddy
Roll no.:21CE10032
Department:Civil Engineering
Package:CodeBlocks
Operating System:Windows*/

int main()
{
    char wood;
    printf("enter the type of wood(n for natural wood, s for synthetic wood):");
    scanf("%c",&wood);
    float weight;
    float baseprice,GST,total;
    switch(wood){
    case 'n':printf("enter weight of wood(in kg) you want:");
    scanf("%f",&weight);
    baseprice=weight*1100;//price of natural wood is Rs.1100/kg
    printf("baseprice =%.2f\n",baseprice);
    GST=20*baseprice/100;//GST on natural wood is 20%
    printf("GST =%.2f\n",GST);
    total=baseprice+GST;
    printf("Total price =%.2f",total);
    break;
    case 's':printf("enter weight of wood(in kg) you want:");
    scanf("%f",&weight);
    baseprice=weight*780;//price of synthetic wood is Rs.780/kg
    printf("Baseprice =%.2f\n",baseprice);
    GST=15*baseprice/100;//GST on synthetic wood is 15%
    printf("GST =%.2f\n",GST);
    total=baseprice+GST;
    printf("Total price =%.2f",total);
    break;
}
return 0;
}
