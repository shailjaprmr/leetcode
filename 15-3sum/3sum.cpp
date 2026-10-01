class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
        int n=a.size();
        vector<vector<int>> res;
        sort(a.begin(), a.end());
        int sum=0;
        for(int i=0; i<n-2; i++)
        {
            int target=-a[i];
            if(i>0 && a[i]==a[i-1])
                continue;
            int left=i+1, right=n-1;
            while(left<right)
            {
                sum=a[left]+a[right]+a[i];
                if(sum<0)
                    left++;
                else if(sum>0)
                    right--;
                else
                {
                    res.push_back({a[i], a[left], a[right]});
                    while(left<right && a[left]==a[left+1])
                        left++;
                    while(left<right && a[right]==a[right-1])
                        right--;
                    left++;
                    right--;
                }
            }
        }
        return res;
    }
};