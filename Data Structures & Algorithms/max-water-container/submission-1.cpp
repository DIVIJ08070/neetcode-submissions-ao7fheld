class Solution {
public:
    int maxArea(vector<int>& height) {
     int h = height.size();
     int i = 0,maxi = 0;
     int n = h-1;
     while(i < n){
        maxi = max(maxi,min(height[i],height[n])*(n-i));
        if(height[i] < height[n]){
            i++;
        }
        else{
            n--;
        }
     }
     return maxi;
    }
};
