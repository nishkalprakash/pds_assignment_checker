/*name - samares malik
  roll no. 22ME10072
  assignment 5*/
  #include<stdio.h>
  #include<math.h>
  void swap(int *m,int *n){//swap function for swaping two numbers
    int t;
    t=*m;*m=*n;*n=t;
    //n = temp;
}
  int main(){
      int n,k;
      int temp1,temp2;
      scanf("%d",&n);
      printf("\n");
      int arr[n];
      //printf("%d", array[1]); //
      if(n>100){ //checking for given range of n
        printf("\nerror since n>100");
      }
      else{
            for(int i=0;i<n;i++){
          scanf("%d",&arr[i]);//taking input of the array

      }
      printf("\nOriginal array ");
      for(int j=0;j<n;j++){
          printf("%d ",arr[j]);//printing the original array

      }

      for(int k =0;k<n;k++){//doing the logic for n times so that swapping occurs enough times
        for(int i = 0;i<n;i++){
        if((arr[i]<0)&&(i>0)){
            if(arr[i-1]>0){
                swap(&arr[i],&arr[i-1]);//swapping an element if it's negetive and it's preceeding element is positive
            }
        }
      }
      }
      printf("\nRearranged array ");
      for(int j=0;j<n;j++){
          printf("%d ",arr[j]);//printing the rearranged array

      }



      }














      return 0;





  }
