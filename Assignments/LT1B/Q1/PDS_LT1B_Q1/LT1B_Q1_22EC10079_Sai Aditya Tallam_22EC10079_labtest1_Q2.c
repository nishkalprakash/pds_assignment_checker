 #include<stdio.h>
 #include<math.h>

int main()

{
   int n,s,i;
   scanf("%d",&n);
   if(n<=0)
  {
  printf("invalid input");
   }
  for(i=1;i<=n;i++)
   {
    
     int a,b,c;
     a=i%10;
     i=i/10;
     b=i%10;
     i=i/10;
     c=i%10; 
     if(c*100+b*10+a== pow(a,3)+pow(b,3)+pow(c,3))
     printf("%d",c*100+b*10+a);
  }
    return 0;
 }
  

