class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        for(int i = 0 ; i < height.size()-1; i++){
            for(int j = i+1 ; j<height.size(); j++){
                int temp = min(height[i],height[j]);
                maxi = max(maxi,temp*(j-i));
            }
        }
        return maxi;
    }
};
