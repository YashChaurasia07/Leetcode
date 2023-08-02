class Solution {
public:
    string reverseWords(string s) {
        // string temp="";
        // vector<string> v;
        // int i = 0;
        // for(;i<s.length();i++)
        // {
        //     if(s[i]== ' ')
        //     {
        //        i++; 
        //     }
        //     else{
        //         break;
        //     }
        // }
        // for(; i<s.length();i++)
        // {
        //     if(s[i] == ' ')
        //     {
        //         v.push_back(temp);
        //         temp ="";
        //     }
        //     else if(s[i] >= 'a' || s[i]<='z' || s[i] >= 'A' || s[i]<='Z')
        //     {
        //         temp += s[i];
        //     }
        // }
        // if(!(temp == ""))
        // {
        //     v.push_back(temp);
        // }
        // int n = v.size()-1;
        // reverse(v.begin(),v.end());
        // string y = "";
        // for(int i =0;i<v.size();i++)
        // {
        //     if(i==v.size()-1)
        //     {
        //         y = y + v[i];
        //     }
        //     else{
        //         y = y + v[i] +" ";
        //     }
        // }
        // return y;


        string temp = "";
    vector<string> v;

    int i = 0;
    while (i < s.length()) {
        // Skip leading whitespaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        
        // Extract word
        while (i < s.length() && s[i] != ' ') {
            temp += s[i];
            i++;
        }

        // Push the extracted word into the vector
        if (!temp.empty()) {
            v.push_back(temp);
            temp = "";
        }
    }

    // Reverse the vector containing words
    reverse(v.begin(), v.end());

    // Join the words with a space and form the output string
    string y = "";
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
            y = y + v[i];
        } else {
            y = y + v[i] + " ";
        }
    }
    
    return y;
    }
};