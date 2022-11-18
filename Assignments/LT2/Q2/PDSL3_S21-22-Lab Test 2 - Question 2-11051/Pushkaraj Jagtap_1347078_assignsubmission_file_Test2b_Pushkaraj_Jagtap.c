/* Name- Pushkaraj Jagtap
   Roll no.- 21MF3IM12
   Codeblock
   Question 2*/

#include<stdio.h>
int maxAlphaValue(int s[]){   //Our function
    int i,j,k;
    j=0;
    for(k=0;k<i;k++){          //for loop to give condition
        if(s[k]%s[i]==0){        // The element before i divisble by k
            j++;              // j keeps the count of such elements in the array
        }
        else{
           return 1
           ;
        }
    }
     return j;     //after the loop ends it will return the value of j
}

int main(){
   int m,s[7],output;


     printf("Enter the 7 Elements in the  array ");
     for(m=0;m<=7;m++){                    // loop to take value from user in array
        scanf("%d",s[m]);
     }

    output=maxAlphaValue(s[m]);       //output is the value of j
    printf("output:%d",output);

}
