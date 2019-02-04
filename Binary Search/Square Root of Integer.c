/*
Implement int sqrt(int x).
Compute and return the square root of x.
If x is not a perfect square, return floor(sqrt(x))
Example :
** Input : 11
** Output : 3
DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY
*/
/*
 * @input A : Integer
 * @Output Integer
*/
int Sqrt(int A) {
    long int m;
    if(A==0||A==1)
    {
        return A;
    }
    int s = 0, e = A, ans;   
    while (s <= e) 
    {        
        m = (s+e) / 2;
        if (m*m==A)
            return m;
        if (m*m<A) {
            if(s==m)
                break;
            s=m;
        } 
        else
        {
        if(m==e)
            break;
        e = m;    
        }
    }
    return m;
}