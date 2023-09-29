//raunak dariyal
//23CH30027
//set2 q2

#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  int num, a[100];
  printf("enter the total random numbers to be generated \n");
  scanf("%d",&num);

  for(int i = 0; i < num; i++){
    a[i] = rand()%100;
    printf("%d ", a[i]);

  }
  int a, b ,c ,d, e, f, g, h, j, k;
  float per_a = a*100/num, per_b = b*100/num;
  float per_c = c*100/num, per_d = d*100/num, per_e = e*100/num;
  float per_f = f*100/num;
  float per_g = g*100/num;
  float per_h = h*100/num;
  float per_j = j*100/num;
  float per_k = k*100/num;
  
  for(int i = 0; i < num; i++){
    a = 0;
    if( a[i] < 10)
      a = a + 1;
  }
  for(int i = 0; i < num; i++){
    b = 0;
    if( a[i] < 20)
      b = b + 1;
  }
for(int i = 0; i < num; i++){
  c = 0;
    if( a[i] < 30)
      c = c + 1;
  }
 for(int i = 0; i < num; i++){
   d = 0;
    if( a[i] < 40)
      d = d + 1;
 }
 for(int i = 0; i < num; i++){
   e = 0;
    if( a[i] < 50)
      e = e + 1;
  }
 for(int i = 0; i < num; i++){
   f = 0;
    if( a[i] < 60)
      f = f + 1;
  }
 for(int i = 0; i < num; i++){
   g = 0;
    if( a[i] < 70)
      g = g + 1;
  }
 for(int i = 0; i < num; i++){
     h = 0
    if( a[i] < 80)
      h = h + 1;
  }
 for(int i = 0; i < num; i++){
   j = 0;
    if( a[i] < 90)
      j =  + 1;
  }

 for(int i = 0; i < num; i++){
   k = 0;
    if( a[i] < 100)
      k = k + 1;
  }
 printf("0-9: 0.1%f", per_a);
 printf("10-19: 0.1%f", per_b);
 printf("20-29: 0.1%f", per_c);
 printf("30-39: 0.1%f", per_d);
 printf("40-49: 0.1%f", per_e);
 printf("50-59: 0.1%f", per_f);
 printf("60-69: 0.1%f", per_g);
 printf("70-79: 0.1%f", per_h);
 printf("80-89: 0.1%f", per_j);
 printf("90-99: 0.1%f", per_k);
 
 
 return 0;
    
}
