 #include<stdio.h>
 
  int main()
 { int a,b,c,d,p,q;
   printf("please enter the coordinates of bottom left corner of rectangle\n");
   scanf("%d%d",&a,&b);
   printf("please enter the coordinates of top right corner of rectangle\n");
    scanf("%d%d",&c,&d);
  printf("coordinates of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,a,d,c,d,c,b);
   printf("enter a coordinate to verify\n");
   scanf("%d%d",&p,&q);
    
  if(p>a && p<c && q>b && q<d)
   printf(" Coordinate is inside the rectangle.\n");
   else
   printf(" Coordinate is outside the rectangle.\n");
  }