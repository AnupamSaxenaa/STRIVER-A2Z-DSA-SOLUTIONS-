//question - find max subarray with atmost two type of fruits

//1.BRUTE SOLUTION - TC-O(N^2) SC-O(1) AT MAX THREE FIR BREAK HO JAEGA

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         unordered_set<int>s;
//         int n = fruits.size() , maxx = 0;    
//         for(int i = 0 ; i < n ; i++){
//             for(int j = i ; j < n ; j++){
//                 s.insert(fruits[j]);
//                 if(s.size()>2){
//                     break;
//                 }
//                 else maxx = max(maxx,j-i+1);
//             }
//             s.clear();
//         }

//         return maxx;
//     }
// };

//2.BETTER SOLUTION - TC-O(2*N) SC-O(1) AT MAX THREE FIR BREAK HO JAEGA

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         unordered_map<int,int> freq;
//         int n = fruits.size();
//         int l = 0, maxx = 0;

//         for(int r = 0 ; r < n ; r++){
//             freq[fruits[r]]++;

//             while(freq.size() > 2){
//                 freq[fruits[l]]--;
//                 if(freq[fruits[l]] == 0)
//                     freq.erase(fruits[l]);
//                 l++;
//             }

//             maxx = max(maxx, r - l + 1);
//         }

//         return maxx;
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(1) AT MAX 3

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         unordered_map<int,int> freq;
//         int n = fruits.size();
//         int l = 0, maxx = 0;

//         for(int r = 0 ; r < n ; r++){
//             freq[fruits[r]]++;
//             if(freq.size()>2){
//                 freq[fruits[l]]--;
//                 if(freq[fruits[l]]==0)
//                 freq.erase(fruits[l]);
//                 l++;
//             }
//             if(freq.size()<=2) maxx = max(maxx, r - l + 1);
//         }

//         return maxx;
//     }
// };

