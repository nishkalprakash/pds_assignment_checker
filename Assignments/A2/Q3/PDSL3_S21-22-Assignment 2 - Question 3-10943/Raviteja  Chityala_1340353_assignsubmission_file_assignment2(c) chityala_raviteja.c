/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>

int main() {
int m1[4]= {8200, 8300, 6900, 9200};
int m2[4]= {7700, 3700, 4900, 9200};
int m3[4]= {1100, 6900, 500, 8600};
int m4[4]= {800, 900, 9800, 2300};
int a,b,c,d,sum,min_sum=100000000,machine1,machine2,machine3,machine4;
for (a=0;a<4;a++){
    for (b=0;b<4;b++){
        if (b!=a){
            for (c=0;c<4;c++){
                if ((c!=a) && (c!=b)) {
                    for (d=0;d<4;d++){
                        if ((d!=a) && (d!=b) && (d!=c)) {
                            sum=m1[a]+m2[b]+m3[c]+m4[d];
                            if (sum<=min_sum){
                                min_sum=sum;
                                machine1=a+1;
                                machine2=b+1;
                                machine3=c+1;
                                machine4=d+1;
                        
                            }
                            
                        }
                    }
                }
            }
        }
    }
}
printf("Total cost=%d\n",min_sum);
printf("machine1 - vendor%d\n",machine1);
printf("machine2 - vendor%d\n",machine2);
printf("machine3 - vendor%d\n",machine3);
printf("machine4 - vendor%d\n",machine4);
return 0;

}