#include<math.h>
float sidel(float x[],float y[])
{
    float d;
    d=sqrt(pow(x[0]-y[0],2)+pow(x[1]-y[1],2));
    return(d);
}
float AREA(float x, float y, float z)
{
    float s,a;
    s=(x+y+z)/2;
    a=sqrt(s*(s-x)*(s-y)*(s-z));
    return(a);
}
void main()
{
    int a1,b1,c1,a2,b2,c2,a3,b3,c3;
     float p1[2],p2[2],p3[2];
      float s1,s2,s3,area;
    printf("enter the co-efficients of L1:");
    scanf("%d%d%d",&a1,&b1,&c1);
    printf("enter the co-efficients of L2:");
    scanf("%d%d%d",&a2,&b2,&c2);
    printf("enter the co-efficients of L2:");
    scanf("%d%d%d",&a3,&b3,&c3);
    if(a1*b2==a2*b1||a3*b2==a2*b3||a1*b3==a3*b1)
       {if(a1*b2==a2*b1)
          printf("lines L1&L2 are parallel\nso no point of intersection");
       if(a3*b2==a2*b3)
          printf("lines L2&L3 are parallel\nso no point of intersection");
       if(a1*b3==a3*b1)
         printf("lines L1&L3 are parallel\nso no point of intersection");
       }
       else
       {
         intersect(a1,b1,c1,a2,b2,c2,p1);
               printf("Point of intersection of l1 and l2 is (%f,%f)\n",p1[0],p1[1]);
       intersect(a2,b2,c2,a3,b3,c3,p2);
    printf("Point of intersection of l2 and l3 is (%f,%f)\n",p2[0],p2[1]);
     intersect(a1,b1,c1,a3,b3,c3,p3);
    printf("Point of intersection of l3 and l1 is (%f,%f)\n",p3[0],p3[1]);
     s1=sidel(p1,p2);
    s2=sidel(p2,p3);
    s3=sidel(p3,p1);
    printf("side lengths %f %f %f\n",s1,s2,s3);
    area=AREA(s1,s2,s3);
    printf("area %f",area);

      }

}

int intersect(int A1,int B1,int C1,int A2,int B2,int C2,float p[])
{
    float x,y;
    p[1]=(C2*A1-C1*A2)/(A1*B2-A2*B1);
    p[0]=(C2*B1-C1*B2)/(B1*A2-B2*A1);
    return (p);
}



