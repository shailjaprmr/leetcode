#include <algorithm>
class Solution {
public:
    int majorityElement(vector<int>& a) 
    {
        int n=a.size();
        sort(a.begin(), a.end());
        int count=0, can=0;
        for(int i=0; i<n; i++)
        {
            if(count==0)
                can=a[i];
            if(a[i]==can)
                count++;
            else
                count--;
        }
        return can;
    }
};

