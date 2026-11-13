//LET WORD COUNTS BE N AND OF AVG LENGHT K AND P = number of partial paths generated/stored by BFS
// TC - Path dependent / potentially exponential
// SC - Path dependent / potentially exponential
// class Solution
// {
//     public:
//         vector<vector < string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
//         {
//             bool milgya = false;
//             vector<vector<string>>ans;
//             queue<vector < string>> q;
//             unordered_set<string> s(wordList.begin(), wordList.end());
//             q.push({ beginWord });
//             int currlevel = 0;
//             while (!q.empty())
//             {
//                 int level = q.size();
//                 vector<string> tobedelete;
//                 while (level--)
//                 {
//                     vector<string> currSeq = q.front();
//                     string backseq = currSeq.back();
//                     q.pop();
//                     currlevel++;
//                     for (int i = 0; i < backseq.size(); i++)
//                     {
//                         char orig = backseq[i];
//                         for (char j = 'a'; j <= 'z'; j++)
//                         {
//                             if (j == orig)
//                             continue;
//                             backseq[i] = j;
//                             if (s.find(backseq) != s.end())
//                             {
//                                 currSeq.push_back(backseq);
//                                 q.push(currSeq);
//                                 if(backseq==endWord){
//                                     ans.push_back(currSeq);
//                                     milgya = true;
//                                 }
//                                 tobedelete.push_back(backseq);
//                                 currSeq.pop_back();
//                             }
//                         }
//                         backseq[i] = orig;
//                     }
//                 }
//                 if(milgya) break;
//                	//cleanup
//                 for (auto st: tobedelete)
//                 {
//                     s.erase(st);
//                 }
//             }
//             return ans;
//         }
// };