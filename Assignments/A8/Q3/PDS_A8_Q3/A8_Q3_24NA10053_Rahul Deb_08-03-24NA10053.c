#include <stdio.h>
int num(int n){
    if(n<10){return n;}
    else{return n/10;}
}

void main(){
    int n;
    scanf("%d",&n);
    int A[n];   
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);  // defined array 
    }
    int c=0;
    for(int i=0;i<4;++i){
        for(int j=0;j<n-1;j++){
            if(num(A[j])<num(A[j+1])){
                int temp=A[j];     //sorting based on first digit 
                A[j]=A[j+1];
                A[j+1]=temp;
                
            }
        }
        
    }
    
    for(int i=0;i<n-1;i++){
        if(num(A[i])==num(A[i+1])){
        if((A[i+1]%10)!=0){
            if(A[i]>A[i+1]){    //re arranging finally to get largest number possible
                int x=A[i];
                A[i]=A[i+1];
                A[i+1]=x;
            }
        }
        
        s
        if((A[i]%10)==0 || (A[i+1])%10==0){
            int x=A[i];
                A[i]=A[i+1];
                A[i+1]=x;
        }
        }
    }
    
    
    printf("A[%d] = [",n);
    for(int i=0;i<n;i++){   //printing array
    
    if(i==n-1){printf("%d]\n",A[i]);
    }
    else{
    printf("%d,",A[i]);}
}
    
    printf("Largest =");
    for(int i=0;i<n;i++){   //printing largest mumber
        printf("%d",A[i]);
    }
    
}
