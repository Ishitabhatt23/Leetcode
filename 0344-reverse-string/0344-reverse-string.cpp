class Solution {
public:
    void reverseString(vector<char>& s) {
        //if we have a pointer 1 at start and 1 at end so hello so it would be oellh      olleh
        //this is easy lets do this
        
        int l=0;
        int r=s.size()-1;
         int temp;
        while(l<=r){
           
                temp =s[l];
                s[l]=s[r];
                s[r]= temp;
                l++;
                r--;
        }
      
    }
};