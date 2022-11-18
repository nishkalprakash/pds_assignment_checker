/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int minTotalIqDiff(int m, int n[]){

}
int main()
{ int temp,m, N,output,i=0;
printf("enter number of students: ");
scanf("%d",&N);
int n[N];
printf("enter array n[]: ");
while(i<N){
    fflush(stdin);
    scanf("%d",&n[i]);
    i++;
}
 for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
           if(n[i] > n[j]) {
               temp = n[i];
               n[i] = n[j];
               n[j] = temp;
           }
        }
    }

printf("Enter m: ");
scanf("%d",&m);

output ;
    return 0;
}
