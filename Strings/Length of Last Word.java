public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int lengthOfLastWord(final String A) {
        String[] a = A.split(" ");
        if(a.length>=1)
        return a[a.length-1].length();
        else
        return 0;
    }
}