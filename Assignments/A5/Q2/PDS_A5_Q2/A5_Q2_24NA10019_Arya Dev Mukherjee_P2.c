#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("How many terms: ");
    scanf("%d", &n);
    if(n>100){
        printf("Error: n >100");
        }
    for(int i=0; i<n; i++){
        printf("\nEnter Number: ");
        scanf("%d", &arr[i]);
        }
 //we have taken the array, now we display it.       
    printf("\nOriginal Array: ");
     for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
        }
//now we find duplicates. 
    printf("\nDuplicates: ");       
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            ctr = 0;
            if(arr[i] == arr[j]){
                ctr++;
                if(ctr>1){
                int m = arr[n-j-1];
                arr[n-j-1] = arr[j];
                arr[j] = m;
                n--
                }
                if(ctr>1){
             printf("%d, (%d)"), arr[i], ctr);
               }
               }
               }
               }
           
               
//unique array
     printf("\nUnique Array: ");
     for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
        }
        
        return 0;
        }
        
        
 
   
                
        
            
               
    
