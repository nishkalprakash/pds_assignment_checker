#include <stdio.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/


int main()
{
    int n = 4;
    int m1[] = {8200, 8300, 6900, 9200};
    int m2[] = {7700, 3700, 4900, 9200};
    int m3[] = {1100, 6900, 500, 8600};
    int m4[] = {800, 900, 9800, 2300};
    int sum = m1[0] + m2[1] + m3[2] + m4[3];
    int v[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<n ;j++){
        for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
        if(sum>(m1[i]+m2[j]+m3[k]+m4[l]) && (i!=j) && (j!=k) && (k!=l) && (i!=k) && (i!=l) &&(j!=l)){

        sum = m1[i]+m2[j]+m3[k]+m4[l];
        v[0] = i;
        v[1] = j;
        v[2] = k;
        v[3] = l;
                    }
               }
            }
        }
    }
    printf("Total cost = %d\n", sum);

    for(int k = 0; k<n; k++){
        printf("Machine%d - Vendor%d\n", k+1, v[k]+1);
    }
    return 0;
}
