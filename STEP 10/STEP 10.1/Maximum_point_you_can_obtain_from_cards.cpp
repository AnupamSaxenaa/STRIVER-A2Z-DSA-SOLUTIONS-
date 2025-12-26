//1.BETTER SOLUTION - TC-O(2*K) SC-O(2*K)

// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int l = k , r = 0 , n = cardPoints.size();
//         vector<int>pref;
//         vector<int>suff;
//         int sump = 0 , sums = 0;
//         int p = 0 , s = n-1;
//         for(int i = 0 ; i < k ; i++) {
//             sump+=cardPoints[p];
//             pref.push_back(sump);
//             sums+=cardPoints[s];
//             suff.push_back(sums);
//             p++;
//             s--;
//         }
    
//         int total = 0;
//         for(int i = 0 ; i < k+1 ; i++){
//             int temp = 0;
//             if(l>0)
//             temp += pref[l-1];
//             if(r>0)
//             temp += suff[r-1];

//             total = max(total,temp);
//             l--;
//             r++;
//         }
//         return total;
//     }
// };


//2.OPTIMAL SOLUTION - TC-O(2*K) SC-O(1)

// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int sum = 0, maxx = 0, n = cardPoints.size();
//         for(int i = 0 ; i < k ; i++) sum+=cardPoints[i];
//         maxx = max(maxx,sum);
//         int l = k-1 , r = n-1;
//         while(l>-1){
//             sum-=cardPoints[l];
//             sum+=cardPoints[r];
//             maxx = max(maxx,sum);
//             l--;
//             r--;
//         }

//         return maxx;
//     }
// };