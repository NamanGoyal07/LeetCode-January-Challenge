class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int prev= 0;
        int n=arr.size();
        int count = 0;
        for(int i=0;i<arr.size();i++){
            count+=arr[i]-prev-1;
            if(count>=k){
                return i+k;
            }
            prev=arr[i];
        }
        return n+k;
    }
};
