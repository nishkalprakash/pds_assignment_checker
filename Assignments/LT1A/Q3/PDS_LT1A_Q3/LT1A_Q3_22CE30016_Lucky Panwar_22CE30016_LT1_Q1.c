/* NAME -- LUCKY PANWAR
   ROLL NO. -- 22CE30016
   TITLE -- LAB TEST-1 
   QUESTION NO. -- 1 */

#include<stdio.h>
#include<math.h>

float sidelength(int a1,int b1,int a2,int b2);
float cosineoflargestangle( float a, float b, float c);

int main(){

 int x1,y1,x2,y2,x3,y3;
 float AB,BC,AC,max,cos;
 printf("Enter the coordinates of the point A as (x1,y1)\n");
 scanf("%d %d", &x1,&y1);
 printf("Enter the coordinates of the point B as (x2,y2)\n");
 scanf("%d %d", &x2,&y2);
 printf("Enter the coordinates of the point C as (x3,y3)\n");
 scanf("%d %d", &x3,&y3);

 printf("The coordinates of the three points A,B and C are (%d,%d),(%d,%d) and (%d,%d)\n",x1,y1,x2,y2,x3,y3);

 AB = sidelength(x1,y1,x2,y2);
 BC = sidelength(x2,y2,x3,y3);
 AC = sidelength(x3,y3,x1,y1);

 if(AB>=BC && AB>=AC){  
                      max = AB;
		      printf("%f is the largest side\n", max);
                      if(max > BC + AC){printf("Invalide\n");}
		      else if(max*max == AC*AC + BC*BC){
		              printf("Right Angled\n");
                              cos = cosineoflargestangle(max,AC,BC);
 		              if(cos<1){printf("Acute Angled\n");}
		              else if(cos<0){printf("Obtuse Angled\n");}	
                                        }
                      }
 else if(BC>=AB && BC>=AC){ 
		      max = BC;
		      printf("%f is the largest side\n", max);	
		      if(max > AB + AC){printf("Invalide\n");}
	              else if(max*max == AC*AC + AB*AB){
		     	 printf("Right Angled\n");
                     	 cos = cosineoflargestangle(max,AC,AB);
 		     	 if(cos<1){printf("Acute Angled\n");}
		     	 else if(cos<0){printf("Obtuse Angled\n");}
					}
                           }
 else if(AC>=AB && AC>=BC){  
  		      max = AC; 
		      printf("%f is the largest side\n", max); 
	   	      if(max > BC + AB){printf("Invalide\n");}
                      else if(max*max == AB*AB + BC*BC){ 
                      	printf("Right Angled\n");
		     	cos = cosineoflargestangle(max,AB,BC);
 		      	if(cos<1){printf("Acute Angled\n");}
		      	else if(cos<0){printf("Obtuse Angled\n");}
                                      }
			  }
 


 return 0;
}


float sidelength(int a1,int b1,int a2,int b2){
  float p,length;
  p = pow( a2-a1 , 2) + pow( b2-b1 , 2);
  length = pow( p , 1/2);
  return length;
}


float cosineoflargestangle( float a, float b, float c){ 
  float cos;
  cos = (b*b + c*c - a*a)/(2*b*c);
  return cos;      
}

