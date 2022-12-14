class Solution {
public:
    static int Helper(const vector<int>& vec) {
        int low = 0;
        int high = vec.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (vec[mid] >= 0) low = mid + 1;
            else high = mid - 1;
        }
        /* high is the index for the last non-negative number
           high + 1 is the number of non-negative numbers
           size - (high + 1) is the number of negative numbers
        */
        return vec.size() - high - 1;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i=0; i<grid.size(); i++) {
            count += Helper(grid[i]);
        }
        return count;
    }
};