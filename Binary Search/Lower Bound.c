
// Lower Bound 
//we pass Array,n as size of array and x as the number whose lower bound is to be found.

int lb(int *arr,int n,int x)
{
    int l=0;
    int r=n;
    int mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(arr[mid]>=x)
            r=mid;
        else
            l=mid+1;
    }
    if(arr[l]==x)
    return l;
    
    return -1;
}