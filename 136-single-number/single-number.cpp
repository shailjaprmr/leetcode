class Solution {
public:
    int singleNumber(vector<int>& a) 
    {
        int n=a.size();
        int single=0;
        for(int i=0; i<n; i++)
        {
            single^=a[i];
        }
        return single;
    }
};