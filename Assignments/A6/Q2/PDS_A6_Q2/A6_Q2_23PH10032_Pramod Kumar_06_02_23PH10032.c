//Name:pramod kumar
//Roll No:23PH10032

 #include<stdio.h>
 #include<stdlib.h>



 int sum(int a[],int size)
 {
   if(size==0) return 0;
    int add=sum(a,size-1)+a[size-1];
   return add;
 }
  int max(int a[],int size)
  {   
    int maximum=0;
     if(size==0) return a[0]; 
     if(maximum<a[size-1]) maximum=a[size-1];
      max(a,size-1);
      return maximum;
   }
   
   void revers(int a[],int size)
   {  if(size==0) return;
      
     printf("%d ",a[size-1]);
     revers(a,size-1);
        
      
       return;
      }
 int main()
 { int arr[30];
   for(int i=0;i<30;i++)
     {
       arr[i]=rand()%11+20;
     }
   printf("array is\n");
   for(int j=0;j<30;j++)
     {
       printf("%d ",arr[j]);
     }
   printf("\n sum is::");
   printf("%d",sum(arr,30));
   printf("\nmax is:%d\n",max(arr,30));
   printf("revers array\n");
   revers(arr,30);
 
     
   return 0;
 }
