class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // we can use hashmap
        // we can also use loop
        int n=nums.size();
              
        map<int,int>numMap;
        
        for(auto i:nums){
            numMap[i]++;
        }
        n=n/2;
    for(auto x:numMap){
        if(x.second>n){
            return x.first;
        }
    }
        return 0;
        
    }
};