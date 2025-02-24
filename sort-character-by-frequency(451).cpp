class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(128,0);
        for(char c:s)   freq[c]++;
        vector<vector<char>>buckets(s.length()+1);
        for(int i=0;i<128;i++){
            if(freq[i]>0){
                buckets[freq[i]].push_back(i);
            }
        }
        string result="";
        for(int i=s.length();i>=0;i--){
            for(char c: buckets[i]){
                result+=string(i,c);
            }
        }
        return result;
    }
};
