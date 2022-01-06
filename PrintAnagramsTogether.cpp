class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        //map created act--> a2
        //dgo--> god,dog
        unordered_map<string,vector<string> > m;
        for(int i=0;i<string_list.size();i++){
            string s=string_list[i];
            sort(s.begin(),s.end());//string sort kri yha pr
            m[s].push_back(string_list[i]);
        }
        
        vector<vector<string> > ans(m.size());//map ko print krna hai 
        int index=0;//this index is for ans
        for(auto x:m){
            auto v = x.second;//vector banaya jismain store hoga --> god dog
            for(int i=0;i<v.size();i++){
                ans[index].push_back(v[i]);//i=0 -->god i=1--> dog
            }
            index++;
        }
        return ans;
    }
};
