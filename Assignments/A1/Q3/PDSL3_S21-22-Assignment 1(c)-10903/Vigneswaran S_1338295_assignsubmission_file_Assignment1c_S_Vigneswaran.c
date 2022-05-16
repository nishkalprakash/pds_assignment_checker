/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/

#include<stdio.h>
int main(){
 int no,car,insp;
 char day;
 float fract;
 printf("enter day");
 scanf("%c",&day);
 printf("enter no of machines");
 scanf("%d",&no);
 switch(day){
 case '1':
        car=no;
        break;
 case '2':
        car=(no+no/2+no/4);
        break;
 case '3':
        printf("enter k");
        scanf("%d",&insp);
        car=(no-insp+(no-insp)/2+(no-insp)/4);
        break;
 case '4':
        printf("enter boost fraction");
        scanf("%3.2f",&fract);
        car=(no+fract*no);
        break;
 case '5':
        printf("enter boost fraction");
        scanf("%3.2f",&fract);
        car=(no+fract*no);
        break;
 case '6':
        printf("enter k");
        scanf("%d",&insp);
        car=(no-insp+(no-insp)/2+(no-insp)/4);
        break;
 case '7':
        printf("enter boost fraction");
        scanf("%3.2f",&fract);
        car=(no+fract*no);
        break;
 default:
        printf("enter no from 1 to 7 only");
        break;
 }
 printf("No of cars manufactured=%d",car);
}
