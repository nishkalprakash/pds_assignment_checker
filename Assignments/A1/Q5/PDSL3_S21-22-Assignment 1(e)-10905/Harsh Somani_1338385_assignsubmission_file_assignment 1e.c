/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    int cost, weight,gst;
    char wood;
    scanf("$c",&wood);
    switch(wood){
case'n':
    {scanf("%d",&weight);
    cost=1100*weight;
    gst=cost/5;
    printf("cost=%d",cost);
    printf("gst=%d",gst);
    printf("total=%d",cost+gst);
    break;}
    case's':
    {scanf("%d",&weight);
    cost=780*weight;
    gst=cost/100*15;
    printf("cost=%d",cost);
    printf("gst=%d",gst);
    printf("total=%d",cost+gst);
    break;}}
}
