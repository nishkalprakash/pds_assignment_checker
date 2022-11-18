/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    int num[50],c=0;
    printf("enter the digits(c,d): ");
    scanf("%d %d",&a,&b); //taking input

    //five for loops for 5-digit number
    for (int m=0;m<2;m++){
        for (int n=0;n<2;n++){
            for (int p=0;p<2;p++){
                for (int q=0;q<2;q++){
                    for (int r=0;r<2;r++){
                        int sum=0; //variable for 5 digit number
                        int arr[5]={-1,-1,-1,-1,-1}; //array to store the multiples of 10^n
                        //if-else statements to switch between digits c and d at all places of the 5 digit number
                        if (m==0) arr[0]=a; 
                        else arr[0]=b;
                        if (n==0) arr[1]=a;
                        else arr[1]=b;
                        if (p==0) arr[2]=a;
                        else arr[2]=b;
                        if (q==0) arr[3]=a;
                        else arr[3]=b;
                        if (r==0) arr[4]=a;
                        else arr[4]=b;
                        
                        //generating the 5 digit number
                        sum=pow(10,4)*arr[0]+pow(10,3)*arr[1]+pow(10,2)*arr[2]+pow(10,1)*arr[3]+pow(10,0)*arr[4];
                        
                        //appending to array only if they are not divisible by (c+d)
                        if (sum%(a+b)!=0){
                            num[c]=sum;
                            c++;
                        }
                    }
                }
            }
        }
    }
    //printing the array
    printf("Numbers: ");
    for (int i=0;i<c;i++){
        printf("%d ",num[i]);
    }

    return 0;
}