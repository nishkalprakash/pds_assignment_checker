//Name:Siddharth Behera
//Roll no:23ME10082
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int a[20],b[20],c[20],i,j,min;
  srand(time(NULL));
  for(i=0;i<20;i++){
    a[i]=(rand()%1001)+1000;//roll
    b[i]=(rand()%11)+15;//age
    c[i]=(rand()%100);//mark
  }
  printf("Table:\n");//table
  for(i=0;i<20;i++){
       printf("Roll:%d Age:%d Mark:%d\n",a[i],b[i],c[i]);
  }
  
 
  printf("Identical age:\n");//identical age
  for(i=0;i<20;i++){
    for(j=1;j<20;j++){
      if(b[i]==b[j])
         printf("Roll:%d Age:%d Mark:%d\n",a[i],b[i],c[i]);
         break;
    }
  }
  
  printf("Identical Marks:\n");//identical Mark
   for(i=0;i<20;i++){
    for(j=1;j<20;j++){
      if(c[i]==c[j])
       printf("Roll:%d Age:%d Mark:%d\n",a[i],b[i],c[i]);
       break;
      
    }
   }
   
   printf("sorted table:\n");//sorting table
   min=a[0];
  for(i=0;i<20;i++){
      if( min>a[i])
	min=a[i];
    printf("Roll:%d Age:%d Mark:%d\n",a[i],b[i],c[i]);
    
  }
  

 
  return 0;
}
    
