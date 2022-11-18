/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 2 Question 3

#include <stdio.h>

 int minTotalIqDiff(int m, int n[]) {




 }


int main(){
    int n_t, n_s,i;
printf("Enter the number of teams : ");
scanf("%d", &n_t);
printf("Enter the number of students ");
scanf("%d", &n_s);
int iq[n_s];
printf("Enter iq of students ");
for(i=0; i<n_s; i++){
   scanf("%d", &iq[i]);

}
minTotalIqDiff(n_t, iq);


return 0;
}

