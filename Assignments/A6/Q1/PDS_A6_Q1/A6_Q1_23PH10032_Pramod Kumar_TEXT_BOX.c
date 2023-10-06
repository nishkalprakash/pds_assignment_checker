//Name:pramod kumar
//Roll:23PH10032


 #include<stdio.h>
 #include<stdlib.h>
int arr[100],size;
  int fill(int size)
  {   for(int i=0;i<size;i++)
      {
 arr[i]=rand()%101+899;
      }
    
int main()
 {
   int n,size;
   printf("enter value of arr size:\n");
   scanf("%d",&size);
   if(size<1||size>100)
     {
       while(1){
  printf("enter value of arr size:");
  scanf("%d",size);
       }
     }
       
   while(1)
     {
       
       printf("enter a number:\n");
       scanf("%d",&n);
       if(n<=0||n>=9) break;
  
       switch(n)

        {
 case:1: {fill();
     break;}
 case:2:{ exchange();
     break;}
 case:3:{ rotate_right();
     break;}
 case:4:{rotate_left();
     break;}
 case:5:{segregate();
     break;}
 case:6:{search();
     break;}
 case:7:{fold();
     break;}
 case:8:{analyze();
     break;}
   defoult break;
 }
     }
   return 0;
 }