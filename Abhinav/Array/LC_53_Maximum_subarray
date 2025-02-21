class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        double temp=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
                temp+=a[i];
                ans=max(temp,ans);
                if(temp<0){
                    temp=0;
                }

            }
            return ans;
        }
        
};
