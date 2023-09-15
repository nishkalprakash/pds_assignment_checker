//NAME : AYUSH KUMAR SINGH
//ROLL NO. 23MT10015

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[50];
    int n;
    int count =0;
    printf("Enter the size of array (Max 50)\n");
    scanf("%d", &n);
    for(int i=0; i<n;i++){
    arr[i] = ((rand()%41)+10);
  }
  for (int i=0; i<n;i++){
    printf("%d ", arr[i]);
  }
  printf("\nTriplets whose sum add up to 60 are: ");
  for (int i = 0; i<n;i++){
    for (int j = i+1; j<n; j++){
        for (int k = j+1; k<n;k++){
            if(arr[i]+arr[j]+arr[k]==60){
                printf("\narray indices = (%d %d %d), their values (%d %d %d)",i, j, k, arr[i], arr[j], arr[k] );
                break;
            }
        }
    }
  }
  return 0;

}
