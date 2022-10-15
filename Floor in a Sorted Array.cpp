class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    //https://www.youtube.com/watch?v=5cx0xerA8XY
    int findFloor(vector<long long> v, long long n, long long x){
        
    long long start=0,end=n-1;
    int res=-1;
    while(start<=end){
    long long mid = start + (end-start)/2;
    if(v[mid]==x){
        res = mid;
    }
    else if(v[mid]<x){
        res = mid;
        start = mid+1;
    }
    else{
        end = mid-1;
    }
    }
    return res;
    }
};