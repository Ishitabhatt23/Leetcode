class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int rows= grid.size();
        int col= grid[0].size();
        int count=0;
        //since we have vector in input like{1,2,3} we are using <vector int,>
        map<vector<int>,int>rowMap;
        //adding all the rows to map with their frequency
        for(int i=0;i<rows;i++){
            rowMap[grid[i]]++;
        }
        //adding columns into a vector so what that is doing grid[0][0] so 0th coulmn and 0 row in our example it would be 3 in 0th itr 1 in 1st itr and 2 in 2nd itr so colMap would be {3,1,2}
        for(int i=0;i<rows;i++){
             vector<int>colMap;
            for(int j=0;j<col;j++){
               colMap.push_back(grid[j][i]);
                
            }
            //using count function it returns if the key is in map or not so if {3,1,2} is in the map or not if it is then we add its frequency to count
            if(rowMap.count(colMap)){
                count+=rowMap[colMap];
            }
        }
        return count;
    }
};