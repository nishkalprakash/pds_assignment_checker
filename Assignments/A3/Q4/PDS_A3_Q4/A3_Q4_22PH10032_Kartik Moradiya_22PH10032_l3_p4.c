#include<stdio.h>
#include<math.h>

  int main()
  {
    int units;
    printf("enter the value of units KWh was used");
    scanf ("%d",&units);
    if (units<=100){
    printf("amount of bill is 60");}
    else if(units<=200 && units>100){
    printf("amont of bill is %f",(50+(units-100)*0.75)*1.2);
    }
    else if(units <=300 && units>200){
    printf("net amount of bill is %f",(125+(units-200)*1.2)*1.2);
    }
    else if(units>300){
    printf("net amount of bill is %f",(245+(units-300)*1.5)*1.2);
    }
    
    return 0;
  }
