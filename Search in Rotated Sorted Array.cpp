class Solution {
    //https://www.youtube.com/watch?v=oTfPJKGEHcc&t=691s
public:
    int search(vector<int>& nums, int target) {
      int lo = 0;
      int hi = nums.size() - 1;
        
        while(lo <= hi) {
			int mid = lo+(hi-lo)/2;
			
            if(nums[mid] == target)
                return mid;
            
            if(nums[lo] <= nums[mid]) {
                //if left half of mid is sorted
                if(target >= nums[lo] && target <= nums[mid])
                //search space is left half of mid
                    hi = mid - 1;
                else
                //search space  is right half of mid
                    lo = mid + 1;
            }
            else {
                if(target >= nums[mid] && target <= nums[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        
        return -1;  
    }
};