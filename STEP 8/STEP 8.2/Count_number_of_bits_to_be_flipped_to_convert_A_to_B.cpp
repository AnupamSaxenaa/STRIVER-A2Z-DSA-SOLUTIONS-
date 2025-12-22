//1.OPTIMAL SOLUTION - TC-O(LOGN) SC-O(1)

// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
//         int chk = 1, cnt = 0;
//         while(chk<=start || chk<=goal){
//             int r1 = start & chk;
//             int r2 = goal & chk;
//             if(r1!=r2) cnt++;
//             chk = chk<<1;
//         }

//         return cnt;
//     }
// };