class Solution{
    //https://www.youtube.com/watch?v=BrrZL1RDMwc
public:
	
	int findMaximum(int nums[], int n) {
	    // code here
      int start = 1, end = n-2 ;
      if(nums[0] > nums[1]) return nums[0];
      if(nums[n-1] > nums[n-2]) return nums[n-1];
        while(start<=end){
            int mid = start + (end - start)/2;
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return nums[mid];
                else if (nums[mid]<nums[mid-1]) end = mid-1;
                else if (nums[mid]<nums[mid+1]) start = mid+1;
        }
        return nums[n-1];
	}
};