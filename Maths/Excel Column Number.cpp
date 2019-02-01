/*	A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
*/
int Solution::titleToNumber(string A) {
    int result = 0;
    for (const auto& c : A)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
    return result;
}