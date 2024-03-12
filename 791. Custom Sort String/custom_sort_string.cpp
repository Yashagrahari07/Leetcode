class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int,int> str;
        for(char ch:s){
            str[ch]++;
        }
        string st="";
        for(char ch:order){
            if(str.find(ch)!=str.end()){
                char occur=str[ch];
                while(occur--){
                    st+=ch;
                }
                str.erase(ch);
            }
        }
        for(auto it:str){
            char ch=it.first;
            char occur=it.second;
            while(occur--){
                st+=ch;
            }
        }
        return st;
    }
};