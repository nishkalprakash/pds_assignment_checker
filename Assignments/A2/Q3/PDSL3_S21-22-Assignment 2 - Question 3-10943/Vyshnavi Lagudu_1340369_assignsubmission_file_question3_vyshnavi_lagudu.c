/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
*/
#include <stdio.h>
int main()
{
    int m1[4],m2[4],m3[4],m4[4],i,v[4],total_cost;
    printf("no .of machines and vendors n=4\n");
    printf("m1:");
    for(i=0;i<4;i++) scanf("%d",&m1[i]);
    printf("\nm2:");
    for(i=0;i<4;i++) scanf("%d",&m2[i]);
    printf("\nm3:");
    for(i=0;i<4;i++) scanf("%d",&m3[i]);
    printf("\nm4:");
    for(i=0;i<4;i++) scanf("%d",&m4[i]);
    for(i=0;i<4;i++){
        v[i]=m1[i];
        if(v[i]>m2[i]){
                      v[i]=m2[i];
                      }
        if(v[i]>m3[i]){
                       v[i]=m3[i];
                      }
        if(v[i]>m4[i]){
                       v[i]=m4[i];
                       }
    }
    total_cost=v[0]+v[1]+v[2]+v[3];
    printf("total cost=%d\n",total_cost);
   return 0;
}


