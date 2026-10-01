class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) 
    {
        int n=a.size();
        vector<int>res(n,0);
        int neg=1, pos=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>0)
            {
                res[pos]=a[i];
                pos+=2;
            }
            else
            {
                res[neg]=a[i];
                neg+=2;
            }
        }
        return res;
    }
};