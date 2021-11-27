class Solution {
public:
    int NO_OF_CHARS = 256;
    int lengthOfLongestSubstring(string str) {
        int n = str.size();
 
        int res = 0; // result
/*
        // last index of all characters is initialized
        // as -1
        vector<int> lastIndex(NO_OF_CHARS, -1);

        // Initialize start of current window
        int i = 0;

        // Move end of current window
        for (int j = 0; j < n; j++) {

            // Find the last index of str[j]
            // Update i (starting index of current window)
            // as maximum of current value of i and last
            // index plus 1
            i = max(i, lastIndex[str[j]] + 1);

            // Update result if we get a larger window
            res = max(res, j - i + 1);

            // Update last index of j.
            lastIndex[str[j]] = j;
        }
        return res;
*/
        int l=0,r=0,len=0;
        map<int,int> m;
        while(r<n){
            if(m.find(str[r])==m.end()){
                m[str[r]]=1;
            }
            else{
                while(m.find(str[r])!=m.end()){
                    m.erase(str[l]);
                    l++;
                }
                m[str[r]]=1;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};