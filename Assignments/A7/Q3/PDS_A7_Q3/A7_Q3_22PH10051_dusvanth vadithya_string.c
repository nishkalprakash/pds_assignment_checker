/* NAME:VADITHYA DUSVANTH
   ROLL NO:22PH10051
   SECTION:14
   TOPIC:SORTING AND SEARCHING */
#include<stdio.h>
#include<string.h>

void bubblesort(int arr[],int size)
{
 int temp,j;
         for(int trial = 0;trial< size - 1;trial++)

    for(int j=0;j,size-1-trial;j++)
      if(arr[j]>arr[j+1])
        temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
    
   char a[100],b[100];
   printf("enter string: ");
   scanf("%c",&a);
   printf("enter string: ");
   scanf("%c"&b);
  
  int n=a,check;
  printf("%d",n);

  int len=0;
   int i = 0;
   while(a[i]/10 == 0)
   for(int i=0;i<len;i++)
     {
      a[i] = int(a[i]);
      a[i] = int(b[i]);

     if(a[i] == b[i])
         check = 1;
     }
   if(check == 0){
      printf("Anagram");
          }
   else{
    printf("NOT Anagram");
        }      

  return 1;
}


  

 
