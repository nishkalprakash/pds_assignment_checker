/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec- 3
Package- Code blocks
Q3
*/
#include<stdio.h>
#define MAX 10
int ans = 10000000000000;       //initial

int large(int a, int b) {if (a>b) {return a;} else {return b;} }         //function for max
int small(int a, int b) {if (a<b) {return a;} else {return b;} }         //function for min



int minTotalIqDiff(int a[], int m, int div, int pos, int sum, int max_sum) {

    if (div==1) {               //base case
        max_sum = large(max_sum,sum);
        sum=0;

        for (int i=pos; i<m; i++) {
            sum+=a[i];
        }
         max_sum = large(max_sum, sum);      //new max sum

    ans = small(ans, max_sum);
    }

   sum = 0;

   for (int i = pos; i<m; i++) {
    sum +=a[i];              //new sum to compare in array slice

    max_sum = large(max_sum, sum);

    minTotalIqDiff(a, m, div-1, i+1, sum, max_sum);
   }

}


int main() {

    int n;                                                                     //no. of students
    printf("enter number of students:\t"); scanf("%d", &n); printf("\n");

    int i, iq[MAX];

    printf("enter the IQs: \t");
    for (i=0; i<n; i++) {
        scanf("%d", &iq[i]);                 //take the input
    }

    printf("\n");

    int m;                                                      //teams
    printf("enter the number of teams:\t"); scanf("%d", &m);

    minTotalIqDiff(iq, n, m, 0,0,0 );
    printf("difference is %d", ans);
}
