/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>
int main() {
    int m,d,cars,k;
    float f;
    printf("Enter the number of machines: ");
    scanf("%d",&m);
    printf("Enter the day(1-7):");
    scanf("%d",&d);
    switch(d) {
        case '1':cars=m;
        printf("Number of manufactured cars=%d",cars);
        case '2':
        cars=round(m+(m/2)+(m/4));
        printf("Number of manufactured cars=%d",cars);
        case '3':
        case '6':printf("Enter the number of machines under inspection:");
        scanf("%d",&k);
        cars=round((m-k)+((m-k)/2)+((m-k)/4));
        printf("Number of manufactured cars=%d",cars);
        case '4':
        case '5':
        case '7':printf("Enter the boosting fraction:");
        scanf("%f",&f);
        cars=round(m+(m*f));
        printf("Number of manufactured cars=%d",cars);
        
    }
    return 0;

}