class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //adjacent means next to each other so we have to check if the number is 0
        //if it is 0 then we have to check if either its previous or next bead is 1 or not
        //if it is not 1 then we can place the bed and if it matches n then we return true else we return false
        int count=0; //this is to keep the count of number of flowerbeds we can fit and if it equals to n
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                    bool leftSide= (i==0 || flowerbed[i-1]==0);
                    bool rightSide=(i==flowerbed.size()-1||flowerbed[i+1]==0);
                
                if(leftSide&&rightSide){
                    flowerbed[i]=1;
                    count++;
                    
                }
                }
            }
        return count>=n;
        }
        
    
};