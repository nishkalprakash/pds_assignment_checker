//question_2
//raunak_dariyal 23CH30027

#include<stdio.h>
#include<math.h>
int i = 0;
int s = 0;
int j = 0;
int k = 29;

void add(int a[i], int s){
  if (i == 30){
    printf("%d",s);
    return;
  }
  sum(a[i+1],s);
  return;
}

void max(int a[i]){
  for (int i = 1; i < 30; i++){
    if(a[i] > a[i-1])
      printf("maximum indice is %d", a[i]);
  }
  return;
}

void reverse( int a[i]){
  
   a[0] = a;
   a[1] = b;
   a[2] = c;
   a[3] = d;
   a[4] = e;
   a[5] = f;
   a[6] = g;
   a[7] = h;
   a[8] = i;
   a[9] = j;
   a[10] = k;
   a[11] = l;
   a[12] = m;
   a[13] = n;
   a[14] = o;
  
  
  for (int i = 0; i <= 14 ; i++){
    
    a[i] = a[29-i];
    printf("%d ", a[i]);
  }
  
  
  
  printf("a[15] = o\n
     a[16] = n\n
     a[17] = m\n
     a[18] = l\n
     a[19] = k\n
     a[20] = j\n
     a[21] = i\n
     a[22] = h\n
     a[23] = g\n
     a[24] = n\n
     a[25] = e\n
     a[26] = d\n
     a[27] = c\n
     a[28] = b\n
     a[29] = a\n");
     
  


  
int main() {
  int a[29];
  int upper = 30;
  int lower = 20;
  printf("random numbers are as follows:\n");
  for( int i = 0; i < 30; i++ ){
    a[i] = rand()%(upper - lower + 1)+ lower;
    printf("%d ", a[i]);
	
  }
          
  return 0;   

}
    
    
  
  

    
  
  

