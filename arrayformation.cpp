class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int n=arr.size();
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=i;
        
        for(int i=0;i<pieces.size();i++){
            int cur=pieces[i][0];
            if(mp.find(cur)==mp.end()) return false;
            int ind=mp[cur];
            for(int j=0;j<pieces[i].size();j++){
                if(pieces[i][j]!=arr[ind+j]) return false;
            }
            
        }
                                
        return true;
        
    }
};
