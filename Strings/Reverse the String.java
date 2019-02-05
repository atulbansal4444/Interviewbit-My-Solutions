/*
Example:

Given s = "the sky is blue",

return "blue is sky the".
*/

public class Solution {
    public String reverseWords(String a) {
        String [] str = a.split(" ");
        a="";
        for(int i=0;i<str.length;i++)  {
            if(str.length!=1)  {
                if(i==str.length-1)
                    a = a + str[str.length-1-i];
                else
                    a = a+str[str.length-i-1]+" ";
            }
        else
            a=str[0];
        }
        return a;
    }
}