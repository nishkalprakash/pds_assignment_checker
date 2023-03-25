#include <stdio.h>
int main() {
int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
double r, p;

scanf("%d%d", &a, &b);

c = a / 100;
d = b / 100;
e = a / 10;
f = b / 10;

g = a / 100;
h = (a - (g*100));
i = ((float) h) / 10;
j = ( h - ( i*10));

k = b / 100;
l = ( b - (k*100));
m = ((float) l) / 10;
n = ( l - (m*10));





if ( c >= -999 && c <= 999 && d >= -999 && d <= 999 && ((c==0 && d!=0)||(c!=0 && d==0) ||(e==0 && f!=0)||(e!=0 && f==0))
)    {
    printf("Wrong Input");
    }

else if ( g==n && i==m && j==k)
{
    printf("Perfect Pair");
}
else{
    printf("Not a perfect pair");
}

return 0;
}
