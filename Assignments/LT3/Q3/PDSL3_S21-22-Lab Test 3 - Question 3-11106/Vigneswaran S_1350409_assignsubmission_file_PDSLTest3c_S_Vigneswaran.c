/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>
#include <stdlib.h>

int main() {
 unsigned int c, d,matches=0,flag=0;
 printf("Enter two integers c and d(in range 1 to 9):");
 scanf("%d%d",&c,&d);//getting the user inputs
 if(c>0 && c<10 && d>0 && d<10)flag=1;//checking if both c and d are 1 digit nos
  else{
    printf("\nEnter digits within the specified range\nExitting!!!\n");
    return 0;
  }
  //iterative algorithm used to generate the nos
 if(flag == 1)//if the digits are proper,proceed...
 {for (int a = 0; a < 2; a++) {//to decide a true or false outcome
        for (int b = 0; b < 2; b++) {
            for (int n = 0; n < 2; n++) {
                for (int m = 0; m < 2; m++) {
                    for (int e = 0; e < 2; e++) {

                        int a1, b1, c1, d1, e1, res;//generating the digits
                        a1 = (a) ? c : d;
                        b1 = (b) ? c : d;
                        c1 = (n) ? c : d;
                        d1 = (m) ? c : d;
                        e1 = (e) ? c : d;

                        res = 10000 * a1 + 1000 * b1 + 100 * c1 + 10 * d1 + e1;//generating the decimal no with the digits

                        if (res % (c + d)) {//prints only if res is not divisible
                            printf("\n%d ", res);
                            matches++;//no of such numbers
                        }
                    }
                }
            }
        }
    }
  printf("\nNo of matches found=%d.\nThese are the nos that are not divisible by %d as well",matches,(c+d));
 }
 return 0;
}
