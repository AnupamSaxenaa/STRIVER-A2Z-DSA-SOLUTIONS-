//TC-O(1000*N) SC-O(1000+1000)
// class Solution {
//   public:
//     int MOD = 1000;
//     int minSteps(vector<int>& arr, int start, int end) {
//         // code here
//         vector<int>dist(1000,1e9);
//         queue<pair<int,int>>q;
//         dist[start] = 0;
//         q.push({0,start});
//         while(!q.empty())
//         {
//             auto [steps,node] = q.front();
//             q.pop();
//             if(node==end) return steps;
//             for(auto val : arr)
//             {
//                 int newVal = (val*node)%MOD;
//                 if(newVal==end) return steps+1;
//                 if(steps+1<dist[newVal]){
//                     dist[newVal] = steps+1;
//                     q.push({steps+1,newVal});
//                 }
//             }
//         }
//         return -1;
//     }
// };