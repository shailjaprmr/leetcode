#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) 
    {
        int n=a.size();
        unordered_map<int, int>f;
        vector<int> res;
        for(int i=0;i<n; i++)
        {
            int sum=target-a[i];
            if(f.find(sum)!=f.end()) // if the other number is there in the map
                return {f[sum], i};
            // add the number to the map along with its index
            f[a[i]]=i;
        }
        return{};
    }
};