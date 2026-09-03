class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minodd = INT_MAX;
        int min = INT_MAX;
        int oddParitySame = 0;
        int evenParitySame = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2){
                oddParitySame++;
                minodd = std::min(minodd,nums1[i]);
            }
            else{
                evenParitySame++;
                min = std::min(min,nums1[i]);
            }
        }
        if(oddParitySame == nums1.size() || evenParitySame == nums1.size()){
            return true;
        }
        else{
            if(minodd < min){
                return true;
            }
            else{
                return false;
            }    
        }
        
    }
};