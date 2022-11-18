# include<stdio.h>
# include<time.h>
# include<stdlib.h>
# include<math.h>
int main(){

    int n, k, d, dn, sum=0;
    float dist;
    srand(time(NULL));

    printf("Enter the number of steps.\n");
    scanf("%d", &n);
    printf("Enter the number of iterations.\n");
    scanf("%d", &k);
    for(n=1;n<=k;n++){
            dn = rand() & 1 ? -1 : 1;
            d=sum+((dn)*(dn));
            dn++;

    }
    dist = sqrt(d/k);
    printf("Total distance covered = %f\n", dist);
    retukrn 0;
}
