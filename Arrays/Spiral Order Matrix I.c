/*
    Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]
Problem Approach :

Complete solution in the hints.
*/

/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* spiralOrder(const int** A, int n11, int n12, int *len1) {
   int i=0,j=0,top,bottom,l,r;
    *len1=n11*n12;
    int *len;
    len = (int*)calloc(n11*n12,sizeof(int));
    
    top=0;
    bottom=n11-1;
    r=n12-1;
    l=0;
    while(top<=bottom && l<=r)
    {
        for(i=l;i<=r;i++)
        {
            len[j]=A[top][i];
            j++;
        }
        top++;
        if(top>bottom)  break;
        for(i=top;i<=bottom;i++)
        {
            len[j]=A[i][r];
            j++;
        }
        r--;
        if(r<l)
            break;
        for(i=r;i>=l;i--)
        {
            len[j]=A[bottom][i];
            j++;
        }
        bottom--;
        for(i=bottom;i>=top;i--)
        {
            len[j]=A[i][l];
            j++;
        }
        l++;
    }
    return len;
}
