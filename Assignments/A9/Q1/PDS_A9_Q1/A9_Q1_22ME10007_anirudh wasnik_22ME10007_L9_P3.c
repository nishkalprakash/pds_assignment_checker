#include<stdio.h>
#include<math.h>
struct complex{
      float a,b;
      
      };

void add(struct complex z1, struct complex z2){                 //adds the numbers
      float x;
      float y;
      x=z1.a+z2.a;
      y=z1.b+z2.b;
      printf("Z=%.1f+%.1fi",x,y);
}





int main()
{


int count;
int k;
struct complex z1,z2;
for(count=1;count<3;count++){
      printf("enter real part of z%d:",count);                  //for input (z1=(z1.a)+(z1.b))
      scanf("%f",&z1.a);
      printf("enter imaginary part of z%d:",count);
      scanf("%f",&z1.b);
      if(count=2){
                  printf("enter real part of z%d:",count);
                  scanf("%f",&z2.a);
                  printf("enter imaginary part of z%d:",count);
                  scanf("%f",&z2.b);
            }
      }

add(z1,z2);                                                     //calls the function to add
return 0;

}
