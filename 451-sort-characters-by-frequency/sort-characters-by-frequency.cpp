class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>>pq;
        
		//enter all the character frequency in hashmap
		for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
		
		//sort the characters based on the frequency 
        for(auto i:mp){
            pq.push(make_pair(i.second,i.first));
        }
        string ans="";
   
		while(!pq.empty()){
            int a=pq.top().first;
            char b=pq.top().second;
            for(int i=0;i<a;i++){
                ans+=b;
            }
            pq.pop();
        }
        return ans;
    }
};