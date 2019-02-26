/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
#define MOD 1000000007
int cntBits(int* A, int n1) {
    long long int i,j=0,c,x,s=0;
    for(i=0;i<32;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(A[j]&(1<<i))
            c++;
            else
            x++;
        }
        s=s+(c*x);
        c=0;
        x=0;
    }
    return s*2%MOD;
}