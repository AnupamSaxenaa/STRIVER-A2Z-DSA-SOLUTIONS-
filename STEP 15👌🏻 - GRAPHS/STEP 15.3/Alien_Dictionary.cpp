// N is the number of words , L is the avg lenght of each word , 
// K is the number of distinct characters, E is the no of edges
// class Solution {
//   public:
//     string findOrder(vector<string> &words) {
//         // code here
//         vector<vector<int>>adj(26);
//         vector<int>indegree(26,0);
//         vector<int>present(26,0);
//         vector<vector<int>>chk(26,vector<int>(26,0));
//         for(auto word : words)
//             for(auto ch : word)
//                 present[ch-'a'] = 1;           
//         for(int x = 0 ; x < words.size()-1 ; x++)
//         {
//             string one = words[x];
//             string two = words[x+1];
//             int i = 0 , j = 0;
//             while(i<one.size() && j<two.size())
//             {
//                 if(one[i]==two[j]){
//                     i++;
//                     j++;
//                 }else{
//                     if(chk[one[i]-'a'][two[j]-'a']!=1)
//                         {
//                             adj[one[i]-'a'].push_back(two[j]-'a');
//                             indegree[two[j]-'a']++;
//                             chk[one[i]-'a'][two[j]-'a'] = 1;
//                         }
//                     break;
//                 }
//             }
//             if(i<one.size() && j==two.size()) return "";       
//         }
//         int pcnt = 0;
//         queue<int>q;
//         int cnt = 0;
//         string ans = "";
//         for(int i = 0 ; i < 26 ; i++)
//         {
//             if(present[i])
//             {
//                 pcnt++;
//                 if(indegree[i]==0) q.push(i);
//             }
//         }
//         while(!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             ans += (char)(node+'a');
//             cnt++;
//             for(auto it : adj[node])
//             {
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }           
//         }
//         if(pcnt==cnt) return ans;
//         return "";
//     }
// };