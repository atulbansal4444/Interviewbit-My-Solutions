/*
n = 5
n! = 120 
Number of trailing zeros = 1
So, return 1
*/

/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int trailingZeroes(int A) {
    int c=0,i;
   for (i = 5; A / i >= 1; i *= 5)
        c += A / i;
    return c;
}