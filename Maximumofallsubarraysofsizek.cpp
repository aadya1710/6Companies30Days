class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        deque<int> dq;
        for(int i=0;i<n;i++){
            //if smaller element is present then remove it
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            //if front becomes outside of window remove it
            while(!dq.empty() && dq.front() == i-k){
                dq.pop_front();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
        
        return ans;
    }
};
