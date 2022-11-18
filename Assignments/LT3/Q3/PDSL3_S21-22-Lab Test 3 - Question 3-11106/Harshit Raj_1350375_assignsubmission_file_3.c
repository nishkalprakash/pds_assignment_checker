/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
void check(int n,int key1,int key2);

int main() {
int c, d;
printf("enter values of c and d respectively\n");
scanf("%d %d", &c, &d);

for(int m=10000; m<99999; m++){
    check(m, c, d);
}




return 0;
}
void check(int n,int key1,int key2){ //for checking if each digit in the 5 digit integer is either c or d
int temp=n;
	int i, count=0;
        for(i=0;i<5;i++)
        {
            if(n%10==key1 || n%10==key2)
            count++;
            n=n/10;
            if(count==5 && temp%(key1+key2)!=0){       //if every digit either c or d then check for divisibility by (c+d)
                        printf("%d \t", temp);
                    }
        }



}


