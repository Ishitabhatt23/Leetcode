class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mpLost;
        vector<int>loses;
        vector<int>wins;
        for(int i=0;i<matches.size();i++){
            mpLost[matches[i][1]]++;//this takes frequency of 2nd element how many times it occured
        }
        for(int i=0;i<matches.size();i++){
            if(mpLost.find(matches[i][0])==mpLost.end()){
                mpLost[matches[i][0]]=0;//so if the first element is not found in the list then add it in the map with value 0; 
            }
        }
            for(auto x:mpLost){
                if(x.second==0){
                    wins.push_back(x.first);
                }
                if(x.second==1){
                    loses.push_back(x.first);
                    }
            }
        return{wins,loses};
    }
};