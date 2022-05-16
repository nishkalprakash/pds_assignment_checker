#include<stdio.h>
#include<math.h>

/*name-Chetna
  dep-CSE
  roll no.-21CS10019
  package-code blocks*/

  int main()
  {
      int x1,x2,x3,y1,y2,y3;
      float d1,d2,d3;

      printf("Enter the value of x1,x2,x3,y1,y2,y2:");
      scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);


      d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
      d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
      d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

      float a,b,c;
      if(d1>=d2+d3 || d2>=d3+d1 || d3>=d1+d2){
        printf("This is invalid triangle\n");
      }
      else{
        printf("This is valid triangle\n");
      }
      if(d1>=d2 && d1>=d3){c=d1;a=d2;b=d3;}
      else if(d2>=d3 && d2>=d1){c=d2;a=d1;b=d3;}
      else if(d3>=d1 && d3>=d2){c=d3;a=d2;b=d1;}

      if(c*c==a*a+b*b){
        printf("This is a right-angled triangle");
      }
      if(c*c>a*a+b*b)printf("This is a obtuse angled triangle");
      if(c*c<a*a+b*b)printf("This is a acute angled triangle");
  }
