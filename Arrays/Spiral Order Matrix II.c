/*
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:

[
  [ 1, 2, 3 ],
  [ 8, 9, 4 ],
  [ 7, 6, 5 ]
]

/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** generateMatrix(int A, int *len1, int *len2) {
    int i=0,j=1,top,bottom,l,r;
    
    int **arr=(int **)calloc(A,sizeof(int *));
   for(i=0;i<A;i++)
   {
       arr[i]=(int*)calloc(A,sizeof(int));
   }
    top=0;
    bottom=A-1;
    r=A-1;
    l=0;
    
    while(top<=bottom && l<=r)
    {
        for(i=l;i<=r;i++)
        {
            arr[top][i]=j;
            j++;
        }
        top++;
        if(top>bottom)
        {
            break;
        }
        for(i=top;i<=bottom;i++)
        {
            arr[i][r]=j;
            j++;
        }
        r--;
        if(r<l)
        {
            break;
        }
        for(i=r;i>=l;i--)
        {
          arr[bottom][i]=j;
          j++;
        }
        bottom--;
        for(i=bottom;i>=top;i--)
        {
            arr[i][l]=j;
            j++;
        }
        l++;
    }
    *len1=A;
    *len2=A;
    return arr;
}
