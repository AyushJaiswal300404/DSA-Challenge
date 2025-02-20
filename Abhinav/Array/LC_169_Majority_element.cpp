class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
      
       /*1.brute force
        int ans=0,fre;
          for(int i=0;i<n;i++){
            ans=0;
             for (int j=0;j<n;j++){
                if(a[i]==a[j]){
                    ans++;
                }
                if(ans>(n/2)){
                 return a[i];
                }
            }
          }
          return -1;*/
      
      //optimal
      
         int el=a[0],count=0;
         for(int i=0;i<n;i++){
            if(a[i]==el){
                count++;
            }
            else if(count==0){
                el=a[i];
                count++;
            }
            else{
                count--;
            }
         }
         return el;
    }
};
