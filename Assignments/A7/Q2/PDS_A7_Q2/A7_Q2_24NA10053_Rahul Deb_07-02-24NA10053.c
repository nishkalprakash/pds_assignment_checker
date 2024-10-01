#include <stdio.h>
int count;     // setting count as global variable since it is involved in more than one function 
int gcd(int a, int b){
    if(a>b){
        while(a%b!=0 ){     // using the logic of long division to find GCD of two numbers	         
            int temp=b;     // and here the order of the numbers is important 
            b=a%b;
            a=temp;      
        }
        return b;    // returns the GCD
    }
    else{
        while(b%a!=0){
            int temp=a;
            a=b%a;
            b=temp;      
        }
        return a;   // returns the GCD
        
    }
}

void CoPrime(int a[]){
    count=0;      //checking co prime count
    
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(gcd(a[i],a[j])==1){   // checking if they are coprime
                count++;
                printf("%d and %d are Co-Prime\n",a[i],a[j]);    // printing the coprime paris
            }
        }
    }
}

void main(){
int a[5];
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

CoPrime(a);
if(count==0){printf("No Co-Prime found");}

}
