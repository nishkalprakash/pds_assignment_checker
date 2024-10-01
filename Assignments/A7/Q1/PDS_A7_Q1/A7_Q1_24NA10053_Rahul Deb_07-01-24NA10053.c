#include <stdio.h>

int fact(int n){         //factorial function 
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        
    }
    return f;
}

int power(int x,int n){         //function x to the power of some integer n 
    int temp=1;
    for(int i=1;i<=n;i++){
        temp*=x;
    }
    return temp;
}


float sumofseries(int x,int n){           //iterative function to find sum of the series upto n terms
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=(float)power(x,i)/fact(i);
    
    }
    return sum;
}

void main(){
    int x,n;
    scanf("%d%d",&x,&n);             //asking user for inputs of x and n
    printf("%f",sumofseries(x,n));   // printing the sum of the series 

}
