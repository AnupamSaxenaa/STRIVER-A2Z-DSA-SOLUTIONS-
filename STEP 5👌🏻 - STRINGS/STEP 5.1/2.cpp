//1.BETTER SOLUTION - TC - O(N) SC - O(N)

// class Solution {
// public:
//     string reverseWords(string s) {
//         int i = 0;
//         vector<string>v;
//         while(s[i]==' ')
//         {
//             i++;
//         }
//         while(s[i]!='\0')
//         {
//             if(s[i]==' ')
//             {
//                 i++;
//                 continue;
//             }
//             string temp;
//             while(s[i]!=' ' && i<s.size())
//             {
//                 temp+=s[i++];
//             }
//             v.push_back(temp);
//         }
        
//         string result;
//         for(int i = v.size()-1 ; i >= 0 ; i--)
//         {
//             result+=v[i];
//             if(i!=0) result+=" ";
//         }
//         return result;
//     }
// };

//2.OPTIMAL SOLUTION - TC-O(N) SC-O(1)
// ******* important ques new resize function 

// class Solution {
// public:

//     void reverse(int l,int r,string &s)
//     {
//         while(l<r)
//         {
//             swap(s[l],s[r]);
//             l++;
//             r--;
//         }
//     }

//     void trimming(string &s)
//     {
//         int i=0 , j=0;
//         int n = s.size();
//         while(j<n && s[j]==' ') j++;

//         bool spaceseen =  false;
//         while(j<n)
//         {
//             if(s[j]!=' ')
//             {
//                 s[i++]=s[j++];
//                 spaceseen=false;
//             }
//             else if(spaceseen==false)
//             {
//                 s[i++] = ' ';
//                 spaceseen=true;
//             }
//             else j++;
//         }

//         while (i > 0 && s[i - 1] == ' ') i--;
//         s.resize(i);
//     }

//     void wordreverse(string &s)
//     {
//         int i = 0 , j = 0 , n = s.size();
//         while(j<=n)
//         {
//             if(s[j]==' ' || j==n)
//             {
//                 reverse(i,j-1,s);
//                 j++;
//                 i = j;
//             }
//             else j++;
//         }                 

//     }

//     string reverseWords(string s) {
//         trimming(s);
//         reverse(0,s.size()-1,s);
//         wordreverse(s);
//         return s;
//     }
// };