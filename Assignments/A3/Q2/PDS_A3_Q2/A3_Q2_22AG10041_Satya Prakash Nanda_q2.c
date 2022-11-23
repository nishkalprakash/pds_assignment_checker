#include<stdio.h>
int main()
/*
section 14
roll no:22ag10041
name:satya [prakash nanda
asignment no:3
description:q2
*/
{
int num;
int a,b;




printf("enter a number between 20 and 99 :\n");
scanf("%d", &num);  
if(20<=num && num<=99){printf("entered number is :%d", num);
a=num/10;



if(a==2){printf("twenty");}
else if(a==3){printf("thirty");}
else if(a==4){printf("forty");}
else if(a==5){printf("fifty");}
else if(a==6){printf("sixty");}
else if(a==7){printf("seventy");}
else if(a==8){printf("eighty");}
else if(a==9){printf("ninety");}

 if(num%10==0){printf(".");}
else if(num%10==1){printf(" one");}
else if(num%10==2){printf(" two");}
else if(num%10==3){printf(" three");}
else if(num%10==4){printf(" four");}
else if(num%10==5){printf(" five");}
else if(num%10==6){printf(" six");}
else if(num%10==7){printf(" seven");}
else if(num%1090==8){printf(" eight");}
else{printf(" nine");}


}
else{printf("entered number is not in range");}




return 0;
}
