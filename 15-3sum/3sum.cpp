#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
        int n=a.size();
        vector<vector<int>> res;
        sort(a.begin(), a.end());
        for(int i=0; i<n-2; ++i)
        {
            if(i>0 && a[i]==a[i-1])
                continue;
            int left=i+1, right=n-1;
            int target=-a[i];
            // two pointer to find the other two numbers
            while(left<right)
            {
                int sum=a[left]+a[right];
                if(sum==target)
                {
                    res.push_back({a[i], a[left], a[right]});
                    while(left<right && a[left]==a[left+1])
                        left++;
                    while(left<right && a[right]==a[right-1])
                        right--;
                    left++;
                    right--;
                }
                else if(sum<target)
                 left++;
                else
                    right--;
            }
        }
        return res;
    }
};
