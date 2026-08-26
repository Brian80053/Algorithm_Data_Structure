class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int i,j,l;
        int sz_x = isConnected.size();
        vector <int> res (sz_x,-1);
        int k=1;
        for(i=0; i<sz_x; i++){
            for(j=0; j<i; j++){
                if(isConnected[i][j]==1){
                    if(res[i]==-1 && res[j]==-1){
                        res[i]=k;
                        res[j]=k;
                        k++;
                    }
                    else if(res[i]!=res[j] && (res[i]!=-1 && res[j]!=-1)){
                        int x=min(res[i],res[j]);
                        int y=max(res[i],res[j]);
                        for(l=0; l<sz_x; l++){
                            if(res[l]==x){
                                res[l]=y;
                            }
                        }

                    }
                    else if(res[i]!=res[j] && (res[i]==-1 || res[j]==-1)){
                        int x=min(res[i],res[j]);
                        int y=max(res[i],res[j]);
                        res[j]=y;
                        res[i]=y;                        
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        vector <int> nums (sz_x);
        for(i=0; i<sz_x; i++){
            if(res[i]==-1){
                nums.push_back(1);
                continue;
            }
            nums[res[i]]++;
        }
        int cnt=0;
        sort(nums.begin(),nums.end(),greater<int>());
        for(i=0; i<sz_x; i++){
            if(nums[i]!=0){
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};