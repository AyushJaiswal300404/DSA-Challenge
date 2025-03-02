class Solution {
public:
    int maximum69Number (int num) {
        string st = to_string(num);
        for(int ch =0;ch<st.size();ch++){
            if(st[ch]=='6'){
                st[ch]='9';
                break;
            }
        }
        return stoi(st);
    }
};
