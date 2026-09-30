class Solution {
public:
    bool check(vector<int>& a) 
    {
        int n=a.size();
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>a[(i+1)%n])
                count++;
        }
        if(count<=1)
            return true;
        else
            return false;
    }
};