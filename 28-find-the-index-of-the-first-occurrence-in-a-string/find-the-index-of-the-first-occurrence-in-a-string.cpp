class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n=haystack.size(),m=needle.size(),i=0,j=0;
        while(i<n)
        {
            while(haystack[i]==needle[j]) 
            {
                i++;
                j++;
                if(j==m) return i-j;
            }
            i=i-j+1;
            j=0;
        }
        return -1;
    }
};