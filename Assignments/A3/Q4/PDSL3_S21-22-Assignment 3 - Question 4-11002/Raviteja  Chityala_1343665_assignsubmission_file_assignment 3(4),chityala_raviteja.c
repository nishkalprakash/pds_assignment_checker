/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */
#include <stdio.h>



int main(){
    int n,elements[20],flag,a,x,mid,algo;
     
    printf("Enter the number of elements n:");
    scanf("%d",&n);
    printf("Enter the elements in sorted order:");
    for (a=0;a<n;a++){
        scanf("%d",&elements[a]);
    }
    flag=1;
    for (a=0;a<(n-1);a++){
        if (elements[a]>elements[(a+1)]){
            flag=flag*0;
        }
    }
    while (flag==0){
        printf("Not sorted.Enter again");
        printf("Enter the elements in sorted order:");
    for (a=0;a<n;a++){
        scanf("%d",&elements[a]);
    }
    flag=1;
    for (a=0;a<(n-1);a++){
        if (elements[a]>elements[(a+1)]){
            flag=flag*0;
        }
    }
    }
    printf("Enter the key element x,which you want to search:");
    scanf("%d",&x);
    
    int linear_search(int elements[n],int x){
        for (a=0;a<n;a++){
            if (elements[a]==x){
                printf("successful search");
                int p=a+1;
                return p;
            }
        }
        return -1;
    }
    int bin_search(int elements[n], int x){
    
    int mid =(n-1)/2;
    if (elements[mid] == x)
        return mid;
    if (elements[mid] > x){
        mid=((mid-1)/2);
        if (elements[mid] == x)
        return mid;
        if (elements[mid] > x){
        mid=((mid-1)/2);
        if (elements[mid] == x)
        return mid;
        
    }
    if (elements[mid]<x){
        mid=((mid+1)+(n-1))/2;
        if (elements[mid] == x)
        return mid;
     }
    }
    if (elements[mid]<x){
        mid=((mid+1)+(n-1))/2;
        if (elements[mid] == x)
        return mid;
        if (elements[mid] > x){
        mid=((mid-1)/2);
        if (elements[mid] == x)
        return mid;
    }
    if (elements[mid]<x){
        mid=((mid+1)+(n-1))/2;
        if (elements[mid] == x)
        return mid;
     }
     }
     return -1;
    }
    printf("choose the algorithm : type1 for linear search and 2 for binary search");
    scanf("%d",&algo);
    if (algo==1){
        if (linear_search(elements,x)!=-1){
        printf("successful search \n Element %d has been found at index %d ",x,linear_search(elements,x));
    }
        else linear_search(elements,x);
    if (algo==2){
        if (bin_search(elements,x)!=-1){
        printf("successful search \n Element %d has been found at index %d ",x,bin_search(elements,x));
    }
        else linear_search(elements,x);
    }}
        
    return 0; 
}
    
    