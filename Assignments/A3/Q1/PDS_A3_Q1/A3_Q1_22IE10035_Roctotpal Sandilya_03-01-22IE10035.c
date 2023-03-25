#include<stdio.h>

int main(){
int a,b,c,d,e;
int odd1=0, odd2=0, odd3=0;
int even_counter=0, max_even, odd_counter=0;
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
if(a%2==0){
    even_counter += 1;
    max_even=a;
}
else odd_counter+=1;

if(b%2==0){
    even_counter += 1;
    if(b>max_even) max_even=b;
}
else odd_counter+=1;

if(c%2==0){
    even_counter += 1;
    if(c>max_even) max_even=c;
}
else odd_counter+=1;

if(d%2==0){
    even_counter += 1;
    if(d>max_even) max_even=d;
}
else odd_counter+=1;

if(e%2==0){
    even_counter += 1;
    if(e>max_even) max_even=e;
}
else odd_counter+=1;

if(even_counter == 3) printf("%d", max_even);

if(odd_counter ==3){
    if(a%2==1) odd1=a;
    if(b%2==1) odd2=b;
    if(c%2==1) odd3=c;
    if(d%2==1){
        if(odd1==0) odd1=d;
        else if(odd2==0) odd2=d;
        else if(odd3==0) odd3 =d;
    }
    if(e%2==1){
        if(odd1==0) odd1=e;
        else if(odd2==0) odd2=e;
        else if(odd3==0) odd3 =e;
    }

    if(odd1<odd2&& odd2<odd3) printf("%d %d %d", odd1, odd2, odd3);
    else if(odd1<odd3&& odd3<odd2) printf("%d %d %d", odd1, odd3, odd2);
    else if(odd2<odd1&& odd1<odd3) printf("%d %d %d", odd2, odd1, odd3);
    else if(odd2<odd3 && odd3<odd1) printf("%d %d %d", odd2, odd3, odd1);
    else if(odd3<odd2 && odd2<odd1) printf("%d %d %d", odd3, odd2, odd1);
    else if(odd3<odd1&& odd1<odd2) printf("%d %d %d", odd3, odd1, odd2);

}

return 0;
}
