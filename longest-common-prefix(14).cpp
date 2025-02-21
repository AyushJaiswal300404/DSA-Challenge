class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref=strs[0];
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(ref)!=0){
                ref=ref.substr(0,ref.length()-1);
                if(ref.empty()) return "";
            }
        }
        return ref;
    }
};
