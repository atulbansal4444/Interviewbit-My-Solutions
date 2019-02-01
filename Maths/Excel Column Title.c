/*
	1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/

/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* convertToTitle(int A) {
    char *B;
    B = (char *)calloc(150,1);
    int i=0;
    while(A!=0)
        {
            int rem = A % 26;
            if(rem==0)
            {
                B[i]='Z';
                A=(A/26)-1;
                i++;
            }
            else
            {
                B[i]=((char)((rem - 1) + 'A'));
                A = A / 26;
                i++;
            }
        }
        int j,l=0,r=i-1;
        for(;l<r;)
        {
            char c;
            c=B[r];
            B[r]=B[l];
            B[l]=c;
            l++;
            r--;
        }
        return B;
}