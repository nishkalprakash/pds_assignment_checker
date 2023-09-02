//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int a,b,c,d,x,y;
  printf("give coordinates of bottom left corner\n");
  scanf("%d %d",&a,&b);
  printf("give coordinates of top right corner\n");
  scanf("%d %d",&c,&d);

  if((c<=a) ||(b>=d))                             //to check if the top right corner is actually above and to the right of bottom left coordinate
    printf("Ill formed rectangle");
  else{                                           //if the rectangle is correctly formed
    printf("give the point P(x,y)\n");              //asked for point P
    scanf("%d %d",&x,&y);

    if(x==a){                                     /*if x=a then 4 cases one for the bottomleft corner one for top left corner one for left side and rest for outside rectangle*/
      if(y==b)
	printf("point lies on bottom left corner");
      else if(y==d)
	printf("point lies on top left corner");
      else if((y<d)&&(y>b))
	printf("point lies on left side");
      else
	printf("point lies outside the rectangle");
    }
    else if(x==c){                               /*if x=c then 4 cases again*/
      if(y==b)
	printf("point lies on bottom right corner ");
      else if(y==d)
	printf("point lies on top right corner");
      else if((y<d)&&(y>b))
	printf("point lies on right side");
      else
	printf("point lies outside the rectangle");
    }
    else if((x<c)&&(x>a)){                      /*if x is between and c then 4 cases*/
      if(y==b)
	printf("point lies on bottom side ");
      else if(y==d)
	printf("point lies on top side");
      else if((y<d)&&(y>b))
	printf("point lies inside the rectangle");
      else
	printf("point lies outside the rectangle");
    }
    else                                       /*if x doesnt satisfy any of above then point surely lies outside rectangle*/
      printf("point lies outside the rectangle");
  }
  printf("\n");
  return 0;
}
