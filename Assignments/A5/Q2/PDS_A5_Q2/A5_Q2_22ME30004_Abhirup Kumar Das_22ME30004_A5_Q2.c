/*
* Section 14
* Roll No : 22ME30004
* Name : Abhirup Kumar Das
* Assignment No : 5
* Description : Co prime
*/

#include<stdio.h>
void CoPrime(int a, int b){

int temp;

if (a > b) {
temp = a; a = b; b = temp;
}
while ((b % a) != 0) {
temp = b % a;
b = a;
a = temp;
}

}

int main()
{
int p,q,r,s,t;
scanf("%d %d %d %d %d", &p,&q,&r,&s,&t);
/*scanf("%d %d ", &p,&r);
scanf("%d %d ", &p,&s);
scanf("%d %d ", &p,&t);
scanf("%d %d ", &q,&r);
scanf("%d %d ", &q,&s);
scanf("%d %d ", &q,&t);
scanf("%d %d ", &r,&s);
scanf("%d %d ", &r,&t);
scanf("%d %d ", &s,&t);*/

int c= 0;

CoPrime(p,q);
if(p==1){printf("They are Co Prime\n");}
else {c += 1;}

CoPrime(p,r);
if(p==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(p,s);
if(p==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(p,t);
if(p==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(q,r);
if(q==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(q,s);
if(q==1){printf("They are Co Prime\n");}
else {c+=1;}
CoPrime(q,t);
if(q==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(r,s);
if(r==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(r,t);
if(r==1){printf("They are Co Prime\n");}
else {c+=1;}

CoPrime(s,t);
if(s==1){printf("They are Co Prime\n");}
else {c+=1;}

if(c==10){
printf("No Co Prime found\n");
}

return 0;
}
