/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blockS
*/
#include<stdio.h>
int main()
{
    int i,count=0;
    char a[20],b[15];
    printf("user name:");
    scanf("%s",a);
    printf("password:");
    scanf("%s",b);
    for(i=0;b[i]!=0;i++) count++;
    if(count<8){
                printf("invalid password\n");
                }
    return 0;
}
