#include<stdio.h>

int main(){
    int n,bins;
    float max = 0;
    float min = 500;
    printf("Please enter the number of elements in your array: ");
    scanf("%d",&n);
    int arr[n];
    //we take the input array.
    for(int i = 0; i<n; i++){
        int t = 0;
        printf("\nPlease enter %d index of array: ",i);
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max = arr[i];
            }
        if(arr[i]<min){
            min = arr[i];
            }
            max++;    
    }
    printf("\nHow many bins: ");
    scanf("%d", &bins);
    bins++;
    int segment[bins+1];
    for(int i = 0; i<=bins; i++){
        segment[i] = ((max-min)/bins)*i + min;
        }
        segment[bins+1]=max;
    int bin[n];
    for(int i = 0; i<bins; i++){  
        printf("\nbin%d-> ",i+1);    
        int e = 0;   
        for(int j = 0; j<n; j++){
            if((arr[j]>segment[i])&&(arr[j]<segment[i+1])){
            printf("%d", arr[j]);
            e++;
            }
      
        }
          printf(" elems = %d",e);
        }
        return 0;
        }                
                
        
    
    
    
