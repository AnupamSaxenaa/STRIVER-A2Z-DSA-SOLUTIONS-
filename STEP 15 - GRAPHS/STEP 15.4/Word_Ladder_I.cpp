//LET AVG WORDS COUNT BE N AND AVG LENGHT OF THOSE BE K
//TC-O(NK+26NK^2) SC-O(2NK)
// class Solution
// {
//     public:
//         int ladderLength(string beginWord, string endWord, vector<string> &wordList)
//         {
//             unordered_set<string> s;
//             //NK
//             for (string ss: wordList) s.insert(ss);
//             queue<pair<string, int>> q;
//             q.push({ beginWord,
//                 1 });
//             //N AS ONLY THOSE WORDS WILL ENTER QUEUE WHICH ARE IN WORDLIST
//             while (!q.empty())
//             {
//                 auto[t, l] = q.front();
//                 q.pop();
//                 //K*26
//                 for (int i = 0; i < t.size(); i++)
//                 {
//                     char temp = t[i];
//                     for (int j = 0; j < 26; j++)
//                     {
//                         t[i] = char('a' + j);
//                         //find take avg k
//                         if (s.find(t) != s.end())
//                         {
//                             q.push({ t,
//                                 l + 1 });
//                             s.erase(t);
//                             if (t == endWord)
//                             {
//                                 return l + 1;
//                             }
//                         }
//                     }
//                     t[i] = temp;
//                 }
//             }
//             return 0;
//         }
// };