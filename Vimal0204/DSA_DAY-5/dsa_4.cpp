class Solution {
public:
    vector<string> abc {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void dp(int i,string dig,string curr,vector<string>& ans)
    {
        if(i==dig.size())
            ans.push_back(curr);
        else
        {
            int j=dig[i]-'0';
//going through all possible orientations for the specific digit
//j-2 as each numbers corresponding possible digits are stored at numbers-2 index
            for(int a=0;a<abc[j-2].size();a++)
                dp(i+1,dig,curr+abc[j-2][a],ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        dp(0,digits,"",ans);
        return ans;
    }
};
