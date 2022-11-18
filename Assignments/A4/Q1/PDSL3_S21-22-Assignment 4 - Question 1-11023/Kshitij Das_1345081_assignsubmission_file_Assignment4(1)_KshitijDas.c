/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */

  #include <stdio.h>
  int N; //defining global variable representing no. of elements in array and initializing to random value
  int last;//last element index
  
  
  //function to check for repeated elements
  void check(int a[N]);
  //function to write all combination
  void comb(int n, int a[n],int i);

  int main(void){
      
      //asking user for the input
      printf("Enter the no. of elements:");
      scanf("%d", &N);
      int a[N];
      printf("Type the elements of array:");
      int i;
      for(i = 0; i < N; i++){
          scanf("%d", &a[i]);
      }
      check(a);
      return 0;
  }

  void check(int a[N]){
      int i,j;
      last = N - 1;
      for(i = 0; i <= last; i++){
          //trying to check whether it is equal to the subsequent elements
          for(j = i + 1; j <= last; j++){
              //if it is equal then remove the element and decrease the no. of total no. of elements
              if(a[i]==a[j]){
                  //removing the element
                  int x;
                  for(x = j;x < last; x++){
                      a[x] = a[x+1];
                  }
                  last--;
              }
          }
      }
      //printing out combinations
      comb(N,a,0);
      return;
  }
//interative prototype
 /*void comb(int n,int a[n]){
     int i,j,k;
     for(i = 0; i < n; i++){
         for(j = i;j < n; j++){
             for(k = j; k < n; k++){
                 printf("\t(%d,%d,%d)",a[i],a[j],a[k]);
             }
         }
     }
     return;
 }*/
 //converting iterative prototype to recursive
 void comb(int n,int a[n],int i){
     
     if(i==last){
         printf("\t(%d,%d,%d)",a[i],a[i],a[i]);
         return;
     }
     else{
         int j,k;
         for(j = i;j < n; j++){
             for(k = j; k < n; k++){
                 printf("\t(%d,%d,%d)",a[i],a[j],a[k]);
             }
         }
         return comb(n, a, i + 1);
     }
}