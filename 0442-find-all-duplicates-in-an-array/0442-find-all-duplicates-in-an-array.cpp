class Solution {
    std::vector<int> numCount;

public:
    vector<int> findDuplicates(vector<int>& n) {
        vector<int> ans;
        for (int i = 0; i < n.size(); i++) {
            int index = abs(n[i]) - 1;

            n[index] = -n[index];
            if (n[index] > 0) {
                ans.push_back(index+1);  
            }
        }
        return ans;
    }
};