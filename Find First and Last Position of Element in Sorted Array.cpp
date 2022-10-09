class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    int FirstPosition = -1;
    int LastPosition = -1;
    int start = 0;
    int end = nums.size()-1;
    while(start<=end) {
    int mid = start+(end-start)/2 ;
    if(nums[mid] == target) {
    FirstPosition = mid;
    end = mid -1;
    }
    else if(nums[mid]>target){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    }
    ans.push_back(FirstPosition);
    start = 0;
    end = nums.size()-1;
    while(start<=end) {
    int mid = start+(end-start)/2 ;
    if(nums[mid] == target) {
    LastPosition = mid;
    start = mid + 1;
    }
    else if(nums[mid]>target){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    }
    ans.push_back(LastPosition);
    return ans;
    }
};