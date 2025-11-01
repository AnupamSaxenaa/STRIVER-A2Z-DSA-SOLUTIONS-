//1.RECURSION - TC-O(2^T*K) SC-O(K*X) (UNPREDICTABLE) LET K LENGHT BE WC LONGEST LENGHT AND X BE TOTAL VECTORS AND T IS TOTAL CALLS . SUB KUCH ( APPROX )

// class Solution {
// public:

//     void generatePls(vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>num,int idx){
//         //BASE CASE
//         if(target<=0 || idx>=candidates.size()){
//             if(target==0) ans.push_back(num);
//             return;
//         }

//         num.push_back(candidates[idx]);
//         generatePls(candidates,target-candidates[idx],ans,num,idx);
//         num.pop_back();
//         generatePls(candidates,target,ans,num,idx+1);
//         return;

//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>>ans;
//         vector<int>num;
//         generatePls(candidates,target,ans,num,0);
//         return ans;
//     }
// };
