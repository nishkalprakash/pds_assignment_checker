
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int max;
    printf("Enter the five numbers : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     // Ques b

    if(a%2!=0 && b%2!=0 && c%2!=0 && d%2==0 && e%2==0){
        if(a<b && a<c){
            if(b<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,b,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,c,b);
        }
        else if(b<c && b<a){
            if(a<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,a,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,c,a);
        }
        else if(c<a && c<b){
            if(a>b) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,b,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,a,b);
        }

    }
    else if(a%2!=0 && b%2!=0 && c%2==0 && d%2!=0 && e%2==0){
           if(a<b && a<d){
            if(b<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,b,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,d,b);
        }
        else if(b<d && b<a){
            if(a<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,a,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,d,a);
        }
        else if(d<a && d<b){
            if(a>b) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,b,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,a,b);
        }

    }
    else if(a%2!=0 && b%2!=0 && c%2==0 && d%2==0 && e%2!=0){
          if(a<b && a<e){
            if(b<e) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,b,e);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,d,e);
        }
        else if(b<e && b<a){
            if(a<e) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,a,e);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,e,a);
        }
        else if(e<a && e<b){
            if(a>b) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,b,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,a,b);
        }
    }
    else if(a%2!=0 && b%2==0 && c%2!=0 && d%2!=0 && e%2==0){
         if(a<d && a<c){
            if(d<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,d,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,c,d);
        }
        else if(d<c && d<a){
            if(a<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,a,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,c,a);
        }
        else if(c<a && c<d){
            if(a>d) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,d,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,a,d);
        }
    }
     else if(a%2!=0 && b%2==0 && c%2!=0 && d%2==0 && e%2!=0){
           if(a<e && a<c){
            if(e<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,e,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,c,e);
        }
        else if(e<c && e<a){
            if(a<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,a,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,c,a);
        }
        else if(c<a && c<e){
            if(a>e) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,e,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,a,e);
        }
     }
     else if(a%2!=0 && b%2==0 && c%2==0 && d%2!=0 && e%2!=0){
           if(a<e && a<d){
            if(e<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",a,e,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",a,d,e);
        }
        else if(e<d && e<a){
            if(a<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,a,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,d,a);
        }
        else if(d<a && d<e){
            if(a>e) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,e,a);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,a,e);
        }
     }
     else if(a%2==0 && b%2!=0 && c%2!=0 && d%2!=0 && e%2==0){
         if(b<d && b<c){
            if(d<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,d,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,c,d);
        }
        else if(d<c && d<b){
            if(b<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,b,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,c,b);
        }
        else if(c<b && c<d){
            if(b>d) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,d,b);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,b,d);
        }
     }
     else if(a%2==0 && b%2!=0 && c%2!=0 && d%2==0 && e%2!=0){
        if(b<e && b<c){
            if(e<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,e,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,c,e);
        }
        else if(e<c && e<b){
            if(b<c) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,b,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,c,b);
        }
        else if(c<b && c<e){
            if(b>e) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,e,b);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,b,e);
        }
     }
     else if(a%2==0 && b%2!=0 && c%2==0 && d%2!=0 && e%2!=0){
        if(b<e && b<d){
            if(e<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",b,e,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",b,d,e);
        }
        else if(e<d && e<b){
            if(b<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,b,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,d,b);
        }
        else if(d<b && d<e){
            if(b>e) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,e,b);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,b,e);
        }
     }
     else if(a%2==0 && b%2==0 && c%2!=0 && d%2!=0 && e%2!=0){
        if(c<e && c<d){
            if(e<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",c,e,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",c,d,e);
        }
        else if(e<d && e<c){
            if(c<d) printf("The Smallest three odd numbers are : \n %d %d %d\n",e,c,d);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",e,d,c);
        }
        else if(d<c && d<e){
            if(c>e) printf("The Smallest three odd numbers are : \n %d %d %d\n",d,e,c);
            else printf("The Smallest three odd numbers are : \n %d %d %d\n",d,c,e);
        }
     }

    // third question

    if((a%2==0 && b%2==0 && c%2==0 && d%2!=0 && e%2!=0) || (a%2==0 && b%2==0 && c%2!=0 && d%2==0 && e%2!=0) || (a%2==0 && b%2==0 && c%2!=0 && d%2!=0 && e%2==0)
   || (a%2==0 && b%2!=0 && c%2==0 && d%2==0 && e%2!=0) || (a%2==0 && b%2!=0 && c%2==0 && d%2!=0 && e%2==0) || (a%2==0 && b%2!=0 && c%2!=0 && d%2==0 && e%2==0)
   || (a%2!=0 && b%2==0 && c%2==0 && d%2==0 && e%2!=0) || (a%2!=0 && b%2==0 && c%2==0 && d%2!=0 && e%2==0) || (a%2!=0 && b%2==0 && c%2!=0 && d%2==0 && e%2==0)
   || (a%2!=0 && b%2!=0 && c%2==0 && d%2==0 && e%2==0)){
    printf("The largest number is %d \n",a*(a>b && a>c && a>d && a>e) + b*(b>a && b>c && b>d && b>e) + c*(c>a && c>b && c>d && c>e) + d*(d>a && d>b && d>c && d>e) +e*(e>a && e>b && e>c && e>d));
   }

    return 0;
}
