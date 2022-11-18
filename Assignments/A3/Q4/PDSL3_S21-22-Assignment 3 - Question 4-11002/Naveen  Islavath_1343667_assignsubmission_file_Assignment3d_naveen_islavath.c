while(start<=last)
    {
        int mid=(start+last)/2;
        if(x==a[mid])       
            return mid;
        else if(x < a[mid]) 
            last=mid-1;
        else if(x>a[mid])
            start=mid+1;