#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d,s;
    s=0;
    printf("(x1,y1)=");
    scanf("%f,%f",&x1,&y1);
    printf("(x2,y2)=");
    scanf("%f,%f",&x2,&y2);
    printf("(x3,y3)=");
    scanf("%f,%f",&x3,&y3);
    printf("(x4,y4)=");
    scanf("%f,%f",&x4,&y4);
    a=(((x1-x2)*(y2-y3))-((x2-x3)*(y1-y2)))/2;
    b=(((x1-x2)*(y2-y4))-((x2-x4)*(y1-y2)))/2;
    c=(((x1-x3)*(y3-y4))-((x3-x4)*(y1-y3)))/2;
    d=(((x2-x3)*(y3-y4))-((x3-x4)*(y2-y3)))/2;
    if(a<0){a*=(-1);}
    if(b<0){b*=(-1);}
    if(c<0){c*=(-1);}
    if(d<0){d*=(-1);}
    printf("%f ",a);
    printf("%f ",b);
    printf("%f ",c);
    printf("%f ",d);
    if (s==0){
        if(a>=b && a>=c && a>=d){
                if(((pow(pow((x2-x1),2)+pow((y2-y1),2),0.5))+pow(pow((x3-x1),2)+pow((y3-y1),2),0.5))<=pow(pow((x2-x3),2)+pow((y2-y3),2),0.5) || ((pow(pow((x2-x1),2)+pow((y2-y1),2),0.5))+pow(pow((x2-x3),2)+pow((y2-y3),2),0.5))<=pow(pow((x3-x1),2)+pow((y3-y1),2),0.5) || ((pow(pow((x2-x1),2)+pow((y2-y1),2),0.5))+pow(pow((x3-x1),2)+pow((y3-y1),2),0.5))<=pow(pow((x2-x3),2)+pow((y2-y3),2),0.5)){
                   printf("primeter=0");
                   }
                else{
                    printf("Points having maximum area are : (%f,%f),(%f,%f),(%f,%f)\n\n",x1,y1,x2,y2,x3,y3);
                    printf("Perimeter = %f",pow(pow((x2-x1),2)+pow((y2-y1),2),0.5)+pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)+pow(pow((x2-x3),2)+pow((y2-y3),2),0.5));
                    s++;
                }


    }
    }
    if (s==0){

        if(c>=a && c>=b && c>=d){
                if(pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)+pow(pow((x4-x1),2)+pow((y4-y1),2),0.5)<=pow(pow((x4-x3),2)+pow((y4-y3),2),0.5) || pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)+pow(pow((x4-x3),2)+pow((y4-y3),2),0.5)<=pow(pow((x4-x1),2)+pow((y4-y1),2),0.5) || pow(pow((x4-x1),2)+pow((y4-y1),2),0.5)+pow(pow((x4-x3),2)+pow((y4-y3),2),0.5)<=pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)){
                    printf("primeter=0");
                }
                else{
                    printf("Points having maximum area are : (%f,%f),(%f,%f),(%f,%f)\n\n",x1,y1,x3,y3,x4,y4);
            printf("Perimeter = %f",pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)+pow(pow((x4-x1),2)+pow((y4-y1),2),0.5)+pow(pow((x4-x3),2)+pow((y4-y3),2),0.5));
            s++;
                }


    }
    }
    if (s==0){
        if(b>=a && b>=c && b>=d){
            printf("Points having maximum area are : (%f,%f),(%f,%f),(%f,%f)\n",x1,y1,x2,y2,x4,y4);
            printf("Perimeter = %f",pow(pow((x2-x1),2)+pow((y2-y1),2),0.5)+pow(pow((x4-x1),2)+pow((y4-y1),2),0.5)+pow(pow((x2-x4),2)+pow((y2-y4),2),0.5));
            s++;

    }

    }


    if(s==0){
        if(d>=b && d>=c && d>=a){
            printf("Points having maximum area are : (%f,%f),(%f,%f),(%f,%f)\n",x2,y2,x3,y3,x4,y4);
            printf("Perimeter = %f",pow(pow((x3-x2),2)+pow((y3-y2),2),0.5)+pow(pow((x3-x4),2)+pow((y3-y4),2),0.5)+pow(pow((x2-x4),2)+pow((y2-y4),2),0.5));
            s++;

    }

    }






return 0;
}
