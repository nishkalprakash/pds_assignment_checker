#include <stdio.h>
#define N 50

int maxAlphaValue(int A[N]){
    int max=0,c=0;
    int i,j;
    for (i=1;A[i]!='\0';i++){
        for (j=0;j<i;j++){ //traverses array j<i and looks for the condition
            if (A[i]%A[j]==0){
                c++; //condition satisfied--> c incremented
            }
        }
        if (c>max){ //checks for maximum among c variable
            max=c;
        }
    }
    return max
}

int main(){
    int a[N],b;
    
    //scanning array till newline is entered
    printf("Enter array(space-separated alues,newline to break): ");
    for (int i=0;i<N;i++){
        char flag; //variable to look for \n
        scanf("%d%s",&a[i],flag);
        if (flag=='\n'){break;} //breaks when \n is entered
    }

    b=maxAlphaValue(a); //function call
    printf("Max Alpha Value: %d",b);

    return 0;
}
