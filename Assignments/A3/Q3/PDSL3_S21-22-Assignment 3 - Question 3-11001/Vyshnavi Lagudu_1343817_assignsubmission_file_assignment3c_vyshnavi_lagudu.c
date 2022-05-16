/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
comments         : coefficient values are integers and remaining all are float values
*/
#include<stdio.h>
#include<math.h>
int parallel(int A1,int B1,int A2,int B2)
{
     int k=0;
     if((A1/A2)==(B1/B2)) k=1;
     return(k);
}
float intersection(float a1,float b1,float c1,float a2,float b2,float c2)
{
     float x,y;
     x=((c1*b2)-(c2*b1))/((a1*b2)-(a2*b1));
     y=((c1*a2)-(c2*a1))/((b1*b2)-(b2*a1));
     return(x,y);
}
float length(float x1,float y1,float x2,float y2)
{
    float d;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return(d);
}
float Area(float d1,float d2,float d3)
{
     float s,a;
     s=(d1+d2+d3)/2;
     a=sqrt(s*(s-d1)*(s-d2)*(s-d3));
     return(a);
}
int main()
{
    int k[3],i,a[3],b[3],c[3],j;
    float x[3],y[3],d[3],area;
    printf("the coefficients (a,b,c) of three lines:\n");
    for(i=0;i<3;i++){
        printf("line %d:",i+1);
        scanf("%d,%d,%d",&a[i],&b[i],&c[i]);
        printf("\n");
        }
    k[0]=parallel(a[0],b[0],a[1],b[1]);
    k[1]=parallel(a[1],b[2],a[2],b[2]);
    k[2]=parallel(a[2],b[2],a[3],b[3]);
    for(i=0;i<3;i++){
        if(k[i]=0) continue;
        else if(k[i]=1){
                   printf("lines %d and %d are parallel; no intersection points",i+1,i+2);
                   break;
                   }
        }
    if((k[0]==0)&&(k[1]==0)&&(k[2]==0)){
        x[0],y[0]=intersection(a[0],b[0],c[0],a[1],b[1],c[1]);
        printf("point of intersection of line 1 and 2 (%f,%f)\n",x[0],y[0]);
        x[1],y[1]=intersection(a[1],b[1],c[1],a[2],b[2],c[2]);
        printf("point of intersection of line 2 and 3 (%f,%f)\n",x[1],y[1]);
        x[2],y[3]=intersection(a[0],b[0],c[0],a[2],b[2],c[2]);
        printf("point of intersection of line 1 and 3 (%f,%f)\n",x[2],y[2]);
         d[0]=length(x[0],y[0],x[1],y[1]);
         d[1]=length(x[1],y[1],x[2],y[2]);
         d[2]=length(x[0],y[0],x[2],y[2]);
         printf("side lengths = %f,%f,%f\n",d[0],d[1],d[2]);
         area=Area(d[0],d[1],d[2]);
         printf("area=%f",area);
         }
     return 0;
}
