/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 2(c)
*/

#include <stdio.h>

int main(){

	int m1[]={8200,8300,6900,9200};   //m1, m2, m3, m4 are four machines
	int m2[]={7700,3700,4900,9200};   //inside{} : price of each machine demanded by each of the 4 vendors
	int m3[]={1100,6900,500,8600};
	int m4[]={800,900,9800,2300};
	int a;
	int x=m1[3]+m2[3]+m3[3]+m4[3];
	for(int i=0;i<4;i++)
	{
    for(int j=0;j<4;j++)
    {
    if(j!=i)
    {
    for(int k=0;k<4;k++)
    {
    if(k!=i&&k!=j)
    {
    int l=6-i-j-k;
    int s=m1[i]+m2[j]+m3[k]+m4[l];
    if(s<x)
    {
    x=s;
    a=(i+1)*1000+(j+1)*100+(k+1)*10+(l+1);
        }
        }
       }
      }
     }
	}
	printf("Total required amount=%d\n",x);
	printf("Machine 1 to vendor %d\n",a/1000);
	printf("Machine 2 to vendor %d\n",(a/100)%10);
	printf("Machine 3 to vendor %d\n",(a/10)%10);
	printf("Machine 4 to vendor %d\n",a%10);
}
