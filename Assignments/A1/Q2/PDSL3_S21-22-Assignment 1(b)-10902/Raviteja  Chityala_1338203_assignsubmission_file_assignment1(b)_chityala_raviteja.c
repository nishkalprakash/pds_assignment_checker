/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>
int main() {
    int n,digit1,digit2,digit3,reverse_number;
    printf("Enter a 3-digit number: ");
    scanf("%d",&n);
    //finding hundredths,tenths,units place digit of a number
    digit1=floor(n/100);
    digit2=floor((n-(digit1*100))/10);
    digit3=(n-(digit1*100)-(digit2*10));
    reverse_number=((digit3*100)+(digit2*10)+digit1);
    
    printf("Reverse number=%d",reverse_number);
    return 0;

}