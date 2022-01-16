 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> ans;
        int sum=0;
        int j=0;
        int i=0;
        //int sum=arr[0];
        while(i<=n){
            while(sum>s && j<i){
                sum-=arr[j];
                j++;
            }
            if(sum==s){
                ans.push_back(j+1);
                ans.push_back(i);
                return ans;
            }
            if(i<n){
                sum+=arr[i];
            }
            i++;
            
        }
        ans.push_back(-1);
        return ans;
    }
};
