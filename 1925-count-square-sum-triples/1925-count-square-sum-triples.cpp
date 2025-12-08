class Solution {
public:
    int countTriples(int n) 
    {   int count=0;
        unordered_set<int>m;
        for(int i=1;i<=n;i++) m.insert(i*i);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(m.find(i*i+j*j)!=m.end()) count++;
            }
        }return count;

    }
};