class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        // TC:O(n) n times traversed
        // SC:O(k) k elements are inserted at a time
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && arr[dq.back()]<=arr[i]){//agr value inserted badi hai already presented se to choti values ko pop krenge
                dq.pop_back();
            }
            while(!dq.empty() && dq.front() == i-k){//agr vo window se bahar hogya
                dq.pop_front();
            }
            dq.push_back(i);
            if(i>=k-1){//jab pehli 3 aa jae=yengi entry to next se vo apna aap 3 leti rahegi
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};
