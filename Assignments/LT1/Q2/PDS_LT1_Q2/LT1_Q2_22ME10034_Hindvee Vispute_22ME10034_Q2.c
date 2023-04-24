#include<stdio.h>
#include<math.h>

int main(){
int n, i, t, num, rev, d, diff;
int counter = 1;
int j=1;
int p =1;

/* reading an integer*/
printf("Enter the Integer:");
scanf("%d", &n);

/* finding no. of digits in the number*/
int t1= 0;

while(1)
{
    n = n/10;
    if(n==0)
        break;
    else
        counter++;
}
t = counter;

/* finding the maximum place value of entered integer*/
while(1)
{
    p = p*10;
    counter--;
    if(counter==1)
        break;
}

int p1 = p;
if(n%2==1)
{
    printf("Most significant digits to least significant digits: \n");
    while(1)
    {
        num = n/p1;
        printf("%d, ", num);
        p1 = p1/10;
        if(p1<1)
            break;
    }
}
else
{
    printf("Least significant digits to most significant digits: \n");
    while(j>=p)
    {
        num = num/j;
        j = j*10;
        printf("%d, ", num);


    }
}

/*finding reversed no.*/
i =p;
rev = 0;
while(i<=1)
{
    d = n%10;
    rev = rev + d*i;
    n = n/10;
    i =i/10;
    printf("\n Reversed number = %d", rev);
}
printf("\n Reversed number = %d", rev);

diff = n - rev;
if(diff<0)
{
    diff = diff*(-1);
    printf("\n Difference between Reversed and original number = %d", diff);
}
else
{
    printf("\n Difference between Reversed and original number = %d", diff);
}
return 0;
}
