/*
Given a sorted array of integers, find the starting and ending position of a given target value.
Your algorithm’s runtime complexity must be in the order of O(log n).
If the target is not found in the array, return [-1, -1].
*****Example:
    Given [5, 7, 7, 8, 8, 10] and target value 8,
        return [3, 4].
/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int up(int *a,int n,int key)
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
int lb(int *arr,int n,int x)
{
    int l=0,r=n,mid;
    while(l<r)
    {
        mid = (l+r)/2;
        if(arr[mid]>=x)
            r=mid;
        else
            l=mid+1;
    }
    if(arr[l]==x)  return l;
    return -1;
}
int* searchRange(const int* A, int n1, int B, int *len1) {
    *len1=2;
    int *ar;
        ar = (int *)calloc(2,sizeof(int));
        ar[0]=lb(A,n1,B);
        ar[1]=up(A,n1,B);
     return ar;
}
