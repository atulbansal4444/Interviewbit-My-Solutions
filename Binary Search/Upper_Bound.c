
// Upper Bound 
//we pass Array,n as size of array and key as the number whose Upper bound is to be found.

int upper_bound(int *a,int n,int key)
{
    int s =0,e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid]>key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}