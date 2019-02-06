/*
Input : [1 2 2 3 1]
Output : 3
*/
int singleNumber(const int* A, int n1) {
    int i,x=0;
    for(i=0;i<n1;i++)
        x=x^A[i];
        
    return x;
}