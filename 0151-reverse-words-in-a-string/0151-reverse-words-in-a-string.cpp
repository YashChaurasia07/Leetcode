// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string> v;
//         for(int i = 0; i<s.length();i++)
//         {
//             string temp;
//             if(s[i] == ' ' && temp.size() != 0)
//             {
//                 v.push_back(temp);
//                 temp = ' '
//             }
//             else if(s[i] !=' ')
//             {
//                 temp+=s[i];
//             }
//         }
//         reverse(v.begin(),v.end());

//     }
// };

class Solution {
public:
    string reverseWords(string str) {
        stringstream s(str);
        string word;
        vector<string>temp;
        string ans="";

        while(s>>word){
            temp.push_back(word);
        }

        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0)
            ans+=temp[i]+" ";
            else
                ans+=temp[i];

        }
        return ans;
    }
};