# include <stdio.h>
 int main()
 {
     int x1,x2,x3,y1,y2,y3,z1,z2,z3,n1,n2,n3,n4,n5,n6;
     printf("enter (x1,y1,z1) and (x2,y2,z2) and (x3,y3,z3)");
     scanf("%d %d %d %d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
     printf(" the points are (%d %d %d) and (%d %d %d) and (%d %d %d) \n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
     n1=x2-x1;
     n2=y2-y1;
     n3=z2-z1;
     n4=x3-x1;
     n5=y3-y1;
     n6=z3-z1;
     if((n4/n1)==(n5/n2)==(n6/n3))
        printf("the points are collinear \n");
     else
        printf("The points are not collinear \n");

     if((x1,y1,z1)<(x2,y2,z2)<(x3,y3,z3))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
     else if((x1,y1,z1)<(x3,y3,z3)<(x2,y2,z2))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
     else if((x2,y2,z2)<(x3,y3,z3)<(x1,y1,z1))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
     else if((x2,y2,z2)<(x1,y1,z1)<(x3,y3,z3))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
     else if((x3,y3,z3)<(x1,y1,z1)<(x2,y2,z2))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
     else if((x3,y3,z3)<(x2,y2,z2)<(x1,y1,z1))
        printf("(%d %d %d) (%d %d %d) (%d %d %d)",x3,y3,z3,x2,y2,z2,x1,y1,z1);

 }
