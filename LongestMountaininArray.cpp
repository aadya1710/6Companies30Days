class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        if(n < 3){
            return 0;
        }
        int res=0;
        bool peak=false;
        bool low=false;
        int i=0;
        while(i<n-1){//i n-1 se kam isliye kr rha hai kyunki i+1 ki baatein kr rha hai hum to vo invalid hojayega
            if(arr[i] < arr[i+1]){
                int start = i;//starting value store krenge
                //ascending
                while(i<n-1 && arr[i]<arr[i+1]){
                    i++;
                    peak=true;
                }
                //descending
                while(i<n-1 && arr[i]>arr[i+1]){
                    i++;
                    low=true;
                }
                if(peak == true && low == true){
                    res = max(res,i-start+1);
                }
                peak=false;
                low=false;
            }
            else{
                i++;
            }
        }
        return res;
    }
};
