#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        /*
        int n = height.size();
        vector<int> left(n,0);
        
        // get previous greatest height
        int l = height[0];
        for(int i=1;i<n;i++) {
            left[i] = l;
            l = max(l,height[i]);
        }
        
        // calculate next greatest element
        // also update the water trapped as min(next and prev greatest)
        // water can be trapped only if both boundaries are higher than its height
        int r = height[n-1], water = 0, t;
        for(int i=n-2;i>0;i--) {
            t = min(r, left[i]);
            water += t>height[i] ? t-height[i] : 0;
            r = max(r, height[i]);
        }
        
        return water;
        */
        int i = 0;
        int j = height.size() - 1;
        
        int maxLeft = height[i];
        int maxRight = height[j];
        
        int result = 0;
        
        while (i < j) {
            if (maxLeft <= maxRight) {
                i++;
                maxLeft = max(maxLeft, height[i]);
                result += maxLeft - height[i];
            } else {
                j--;
                maxRight = max(maxRight, height[j]);
                result += maxRight - height[j];
            }
        }
        
        return result;
    }
};

int main() {
    Solution a;
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    // {0,1,0,2,1,0,1,3,2,1,2,1}
    // {4,2,0,3,2,5}
    cout << a.trap(h) << endl;
    return 0;
}