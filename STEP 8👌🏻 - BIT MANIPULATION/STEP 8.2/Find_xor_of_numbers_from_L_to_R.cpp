//1.BRUTE SOLUTION - TC-O(r-l+1) SC-O(1)

//LOOP CHLALO L->R AND XOR MA CONCENTRATE KRTE JAO.... SIMPLE

//2.OPTIMAL SOLUTION - TC-O(1) SC-O(1)

// class Solution {
//   public:
//     int findXOR(int l, int r) {
//         // complete the function here
//         int ans = 0;
//         if(r%4==1) ans = 1;
//         if(r%4==2) ans = r+1;
//         if(r%4==3) ans = 0;
//         if(r%4==0) ans = r;
        
//         if(l==1) return ans;
//         else{
//             int cor = 0;
//         if((l-1)%4==1) cor = 1;
//         if((l-1)%4==2) cor = (l-1)+1;
//         if((l-1)%4==3) cor = 0;
//         if((l-1)%4==0) cor = (l-1);
//         return ans^cor;
//         }
//     }
// };