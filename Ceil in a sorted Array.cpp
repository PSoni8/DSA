class Solution{
  public:
    // Function to find ceil of x
    // n: size of vector
    // x: element whose floor is to find
    // https://www.youtube.com/watch?v=uiz0IxPCUeU&t=21s
    int findCeil(vector<long long> v, long long n, long long x){
        
    long long start=0,end=n-1;
    int res=-1;
    while(start<=end){
    long long mid = start + (end-start)/2;
    if(v[mid]==x){
        res = mid;
    }
    else if(v[mid]<x){
        start = mid+1;
    }
    else{
        res = mid;
        end = mid-1;
    }
    }
    return res;
    }
};