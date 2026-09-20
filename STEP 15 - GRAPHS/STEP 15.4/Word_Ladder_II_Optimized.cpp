// class Solution
// {
//     public:
//         vector<vector < string>> ans;
//     void calcpls(unordered_map<string, int> &mpp, vector<string> p, string word, string beginWord)
//     {
//        	//base
//         if (word == beginWord)
//         {
//             reverse(p.begin(),p.end());
//             ans.push_back(p);
//             return;
//         }
//        	//work
//         string t = word;
//         for (int i = 0; i < t.size(); i++)
//         {
//             char orig = t[i];
//             for (char ch = 'a'; ch <= 'z'; ch++)
//             {
//                 if (ch == orig) continue;
//                 t[i] = ch;
//                 if (mpp.find(t) != mpp.end())
//                 {
//                     int t1 = mpp[word] - 1;
//                     int t2 = mpp[t];
//                     if (t1 == t2)
//                     {
//                         p.push_back(t);
//                         calcpls(mpp, p, t, beginWord);
//                         p.pop_back();
//                     }
//                 }
//             }
//             t[i] = orig;
//         }
//     }
//     public:
//         vector<vector < string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
//         {
//             unordered_set<string> s(wordList.begin(), wordList.end());
//             unordered_map<string, int> mpp;
//             queue<string> q;
//             q.push(beginWord);
//             mpp.insert({ beginWord,
//                 0 });
//             bool milgya = false;
//             while (!q.empty())
//             {
//                 string t = q.front();
//                 q.pop();
//                 int currl = mpp[t];
//                 string temp = t;
//                 for (int i = 0; i < t.size(); i++)
//                 {
//                     char orig = t[i];
//                     for (char ch = 'a'; ch <= 'z'; ch++)
//                     {
//                         if (ch == orig) continue;
//                         t[i] = ch;
//                         if (s.find(t) != s.end())
//                         {
//                             if (s.find(t) != s.end())
//                             {
//                                 if (mpp.find(t) == mpp.end())
//                                 {
//                                     q.push(t);
//                                     mpp[t] = currl + 1;
//                                     s.erase(t);
//                                     if (t == endWord)
//                                     {
//                                         milgya = true;
//                                         break;
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                     t[i] = orig;
//                     if (milgya) break;
//                 }
//                 if (milgya) break;
//             }
//             vector<string> p;
//             p.push_back(endWord);
//             calcpls(mpp, p, endWord, beginWord);
//             return ans;
//         }
// };