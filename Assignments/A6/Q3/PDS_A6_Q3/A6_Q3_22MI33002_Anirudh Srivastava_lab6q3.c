#include<stdio.h>

int main(){



int i, n,temp,p,q, l = 0,a[100];
scanf("%d%d",&p,&q);
printf("enter which input you want");
scanf("%d",&n);
if(n==3) {
char date[100];
scanf ("%s", date);
l = 0; while (date[l]) l++;
temp = 0;

for (i=0;i<l;i++) {
if (date[i]!= date[l-1-i]) temp = 1;
}
if (temp == 0) printf ("%s is a Palindrome\n", date);
else printf ("%s is not a Palindrome\n", date);

}
else if(n==1) {
        printf("enter the size of the array");
    scanf("%d",&q);

    for(i=0;i<q;i++) {
        scanf("%d",&a[i]);
    }

      for(i=0;i<q;i++) {
        printf("\n %d \n",a[i]);
    }
    printf("the reversed array is:");

    for(i=0;i<q;i++) {
        printf("\n %d \n",a[q-i-1]);
    }

}
else if (n==2) {
        char c1[100],c2[100];
        scanf("%s",c1);
        scanf("%s",c2);
        printf("%s and %s are anagrams",c1,c2);

}


return 0;
}



