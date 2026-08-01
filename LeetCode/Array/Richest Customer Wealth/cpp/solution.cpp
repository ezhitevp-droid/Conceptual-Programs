class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> s;
        for(int i=0; i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
  
                sum+=accounts[i][j];
            }
            s.push_back(sum);
        }
        sort(s.begin(),s.end());
        return s[s.size()-1];
    }
};