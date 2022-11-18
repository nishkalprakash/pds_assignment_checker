/*
rakesh tarendra
21MT30031
*/
#include<stdio.h>

int myHostelChangingTrip(int pos, int left,
              int n, int L, int R)
{
    if (pos == n) {
        if (left == 0)
            return 1;
        else
            return 0;
    }
    if (left == 0)
        return 0;
    int answer = 0;
    for (int i = L; i <= R; i++) {
        if (i > left)
            break;
        answer = (answer + myHostelChangingTrip(pos + 1,
                                     left - i, n, L, R));

    }
    return answer;
}

int main(){
    int n,k,m,i=1;
    printf("Enter n,k and m = ");
    scanf("%d%d%d",&n,&k,&m);
    printf("Trips = %d\n",myHostelChangingTrip(0,k,n,i,m));
    return 0;
}
