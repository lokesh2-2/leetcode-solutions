class Solution {
public:
    int maxVowels(string s, int k) 
    {
      int sum=0,maxi=0,n=s.size();
      for(int i=0;i<k;i++) if(isVowel(s[i])) sum++;
      maxi=sum;
      for(int i=k;i<n;i++)
      {
        if(isVowel(s[i-k])) sum--;
        if(isVowel(s[i])) sum++;
        maxi=max(maxi,sum);
      }
      return maxi;
    }
    bool isVowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        return false;
    }
};