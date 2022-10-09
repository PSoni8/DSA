class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	int FirstPosition = -1;
    int LastPosition = -1;
    int start = 0;
    int end = n-1;
    while(start<=end) {
    int mid = start+(end-start)/2 ;
    if(arr[mid] == x) {
    FirstPosition = mid;
    end = mid -1;
    }
    else if(arr[mid]>x){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    }
    start = 0;
    end = n-1;
    while(start<=end) {
    int mid = start+(end-start)/2 ;
    if(arr[mid] == x) {
    LastPosition = mid;
    start = mid + 1;
    }
    else if(arr[mid]>x){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    }
    if(LastPosition != -1 && FirstPosition != -1 && LastPosition != FirstPosition)
    return LastPosition - FirstPosition + 1;
    else if(LastPosition != -1 && FirstPosition != -1 && LastPosition == FirstPosition)
    return 1;
    else
    return 0;
	}
};