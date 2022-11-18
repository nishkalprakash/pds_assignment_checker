/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #include<stdlib.h>

  int main(void){
      //taking input from the user
      int n;
      printf("Enter the no. of elements: ");
      scanf("%d",&n);
      printf("\nEnter the elements: ");
      int *a = (int *)malloc(n * sizeof(int));
      for(int i = 0;i < n;i++){
          scanf("%d", a + i);
      }
      int b;
      printf("\nEnter the no. of bins: ");
      scanf("%d",&b);
      //finished taking inputs
      /*Algorithm:
      1. Find the range of array
      2. divide the range into bins
        2(a). throw the elements in bins
        2(b). Print the elements of bins
      */
     //Step 1: Finding the range of array;
     int min = *a; int max = *a; 
     for(int i = 0;i < n;i++){
         if(*(a + i) < min){
             min = *(a+i);
         }
         if(*(a + i) > max){
             max = *(a + i);
         }
     }
     //Step 2: Divide the range into bins
     //first case divisible
     if((max - min + 1)%b == 0){
         for(int i = 0;i < b;i++){
             //determining no. of elements in bin
             int num = 0;
             for(int j = 0;j < n;j++){
                 if((*(a + j) <= (i+1)*(max-min+1)/b) && (*(a + j) >= min + i*(max - min + 1)/b)){
                     num++;
                 }
             }
             //allocating memory
             int *bin = (int *)malloc(num * sizeof(int));
             //throwing into bin
             int x = 0;
             for(int j = 0;j < n;j++){
                 if((*(a + j) <= (i+1)*(max-min+1)/b) && (*(a + j) >= min + i*(max - min + 1)/b)){
                     *(bin + x) = *(a + j);
                     x++; 
                 }
             }
             //printing the elements in bin
             printf("\nElements in bin%d is:",i + 1);
             for(int j = 0;j < num; j++){
                 printf(" %d",*(bin + j));
             }
         }
     }
     //range in not divisible
     //only last bin will be different
     else{
         for(int i = 0;i < b - 1;i++){
             //determining no. of elements in bin
             int num = 0;
             for(int j = 0;j < n;j++){
                 if((*(a + j) <= (i+1)*((max-min+1)/b) && (*(a + j) >= min + i*((max - min + 1)/b)))){
                     num++;
                 }
             }
             //allocating memory
             int *bin = (int *)malloc(num * sizeof(int));
             //throwing into bin
             int x = 0;
             for(int j = 0;j < n;j++){
                 if((*(a + j) <= (i+1)*(max-min+1)/b) && (*(a + j) >= min + i*(max - min + 1)/b)){
                     *(bin + x) = *(a + j);
                     x++; 
                 }
             }
             //printing the elements in bin
             printf("\nElements in bin%d is:",i + 1);
             for(int j = 0;j < num; j++){
                 printf(" %d",*(bin + j));
             }
         }
         //last bin

         //determining no. of elements in last bin
             int num = 0;
             for(int j = 0;j < n;j++){
                 if(*(a + j) > (b - 1)*((max-min+1)/b)){
                     num++;
                 }
             }
         //allocating memory
             int *bin = (int *)malloc(num * sizeof(int));
         //throwing into bin
             int x = 0;
             for(int j = 0;j < n;j++){
                 if((*(a + j) > (b - 1)*((max-min+1)/b))){
                     *(bin + x) = *(a + j);
                     x++; 
                 }
             } 
             //printing the elements in last bin
             printf("\nElements in bin%d is:",b);
             for(int j = 0;j < num; j++){
                 printf(" %d",*(bin + j));
             }
            free(bin);
            bin = NULL;
     }
     free(a);
     a = NULL;
    return 0;
  }