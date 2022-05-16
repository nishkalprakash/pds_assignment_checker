/* Name - Shruti Srivastava
   Roll no- 21EE30025
   Electrical Engg. Dual Degree
   Section 3
   Code Blocks
   Windows 10
   */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int p,db=0;
    double dika;
    int n;
    long k;
    printf("Please enter the number of steps 'n'\n");
    scanf("%d",&n);
    printf("Please enter the number of iterations 'k'\n");
    scanf("%ld",&k);
    for(int i=1;i<=k;i++){
        int dn=0;
        for(int j=1;j<=n;j++){
            p = rand() & 1 ? -1 : 1;
            dn=dn+p;
        }
        db=db+dn*dn;
    }
    dika = sqrt((double)db/k);
    printf("Expected distance : %lf\n",dika);
    return 0;
}
