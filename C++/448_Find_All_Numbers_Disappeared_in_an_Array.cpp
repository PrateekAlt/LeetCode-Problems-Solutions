class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(find(begin(nums), end(nums), i) == end(nums))  // linear search in nums for each i
                ans.push_back(i);
        return ans;
    }
};