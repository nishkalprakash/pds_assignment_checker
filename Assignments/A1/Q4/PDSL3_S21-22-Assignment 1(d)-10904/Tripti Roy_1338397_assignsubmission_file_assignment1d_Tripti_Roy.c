# include<stdio.h>
# include<math.h>
int main(){
    int x1, x2, x3, y1, y2, y3;
    float a, b, c, p, q, r;
    printf("Enter the coordinates of the triangle.\n");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    if((a+b)>c){
        if((b+c)>a){
            if((c+a)>b){
                printf("Valid triangle\n");
            }
        }
    }
    else{
        printf("Invalid Triangle\n");
    }
    p = a*a;
    q = b*b;
    r = c*c;
    if(a>b && a>c){
        if(p==(q+r)){
            printf("This is a right angles triangle.\n");
        }
        else if(p>q+r){
                printf("This is an obtuse angled triangle.\n");
        }
        else{
            printf("This is an acute angled triangle.\n");
        }
    }
    else if(c>b && c>a){
        if(r==(p+q)){
            printf("This is a right angles triangle.\n");
        }
        else if(r>p+q){
                printf("This is an obtuse angled triangle.\n");
        }
        else{
            printf("This is an acute angled triangle.\n");
        }
    }
    else{
        if(q==(r+p)){
            printf("This is a right angles triangle.\n");
        }
        else if(q>r+p){
                printf("This is an obtuse angled triangle.\n");
        }
        else{
            printf("This is an acute angled triangle.\n");
        }
    }

    return 0;
}
