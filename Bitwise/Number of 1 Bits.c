/*
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation

00000000000000000000000000001011
so the function should return 3.

Note that since Java does not have unsigned int, use long for Java
*/
int numSetBits(unsigned int A) {
    int i,c=0;
    if(A==1)
        return 1;
    for(i=0;i<32;i++)
    {
        if((A&1)==1)
            c++;
    
        A=A>>1;
    }
    return c;
}