/*
*Sample Input:

[3 4 1 4 1]
*Sample Output:
1

If there are multiple possible answers ( like in the sample case above ), output any one.

If there is no duplicate, output -1
*/

/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int cmpfunc (const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b );
}

int findRepeatingElement(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]) return arr[i];
    }
    return -1;
}
int repeatedNumber(const int* A, int n1) {
    qsort(A, n1, sizeof(int), cmpfunc);
    return findRepeatingElement(A,n1);
}
