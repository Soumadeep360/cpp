class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(auto &it:intervals){
            if(ans.size()==0||it[0]>ans.back()[1])
            ans.push_back(it);
            else{
                ans.back()[1]=max(ans.back()[1],it[1]);
            }
        } 
        return ans; 
    }
};
