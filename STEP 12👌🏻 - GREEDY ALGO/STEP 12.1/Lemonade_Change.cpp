//1.OPTIMAL SOLUTION - TC-O(N) SC-O(1)

//YOU CAN OPTIMIZE MORE BY JUST TRACKING ONLY DENOMINATIONS OF 5 AND 10 AS 20 IS NOT POSSIBLE AND CAN REPLACE MAP WITH VARS ONLY//
// class Solution {
// public:
//     bool lemonadeChange(vector<int>& bills) {
//         unordered_map<int,int>mpp;
//         mpp[5] = 0;
//         mpp[10] = 0;
//         mpp[20] = 0;

//         for(int i = 0 ; i < bills.size() ; i++){
//             mpp[bills[i]]++;
//             int togive = bills[i]-5;
//             if(togive==0) continue;
//             else{
//                 vector<int>v = {5,10,20};
//                 for(int j = v.size()-1 ; j >= 0 ; j--){
//                     if(togive>=v[j]){
//                         int req = togive/v[j];
//                         if(mpp[v[j]]>=req){
//                             mpp[v[j]]-=req;
//                             togive = togive%v[j];
//                         } 
//                     }
//                 }
//             }
//             if(togive!=0) return false;
//         }

//         return true;
//     }
// };