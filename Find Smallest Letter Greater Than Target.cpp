class Solution {
    // https://www.youtube.com/watch?v=X45c37QMdX0
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int start = 0, end = letters.size()-1;
    char ans = letters[0];
    while(start<=end){
        int mid = start + (end-start)/2;
        if(letters[mid]==target){
            start = mid+1;
        }
        else if(letters[mid]<target){
            start = mid +1;
        }
        else{
            ans = letters[mid];
            end = mid -1;
        }
    }
    return ans;
    }
};