class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //we can use hashmap for this
        // we can get the frequency of all the nums
        //if frequency is greater than 2 we do not add that to our variables
        
         int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (k < 2 || nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
    }
};