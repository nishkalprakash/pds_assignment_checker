#include <stdio.h>
int main(){
int x,y, t=0, total;
printf("The two number between -999 and 999 are ");
scanf("%d,%d",&x,&y);
if ((x>=-999 && x<=-100) ||( x>=100 && x<=999))
    {
        if((x>=-999 && x<=-100) ||( x>=100 && x<=999))
        {
           total=(x/100)+(((x%100)/10)*10)+(((x%100)%10)*10) ;
        }
else
    printf("wrong input");
    t=1;

    }
    else if ((x>=-99&&x<=-10)||(x>=10&&x<=99))
{
    if ((y>=-99&&y<=-10)||(y>=10&&y<=99))
    total = (x/10)+((x%10)*10);
  else{

    printf("wrong input");
    t=1;}
    }
    if (t==0);
    {
        if( total ==y)
            printf("x,y are perfect pair %d,%d" ,x,y );
            else
                printf("x,y are not perfect pair%d,%d",x,y);

    }
    return 0;

}


