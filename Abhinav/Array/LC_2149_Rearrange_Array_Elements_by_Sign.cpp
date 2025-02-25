class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
       int n=a.size();
        int j=0,k=1;
        vector<int> ans(n,0);
        /*brute force m 2 array declare krna issi method se*/
        
        for( int i=0;i<n;i++){
            if(a[i]>0){
                ans[j]=a[i];
                j=j+2;
            }
            if(a[i]<0){
                ans[k]=a[i];
                k=k+2;

            }
        }   
        return ans;
    }
};
