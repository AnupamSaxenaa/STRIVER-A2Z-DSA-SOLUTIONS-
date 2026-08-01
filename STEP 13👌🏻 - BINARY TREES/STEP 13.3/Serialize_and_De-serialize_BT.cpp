//TC-O(N) SC-O(N)
// class Codec
// {
//     public:
//        	// Encodes a tree to a single string.
//         string serialize(TreeNode *root)
//         {
//             if (!root) return {};
//             queue<TreeNode*> q;
//             q.push(root);
//             string s;
//             while (!q.empty())
//             {
//                 int n = q.size();
//                 for (int i = 0; i < n; i++)
//                 {
//                     TreeNode *f = q.front();
//                    q.pop();
//                     if (f != nullptr) s += to_string(f->val) + ",";
//                     else
//                     {
//                         s += ("#,");
//                         continue;
//                     }
//                     if (f != nullptr)
//                     {
//                         q.push(f->left);
//                         q.push(f->right);
//                     }
//                 }
//             }
//             return s;
//         }	// Decodes your encoded data to tree.
//     TreeNode* deserialize(string data)
//     {
//         if(data.size()==0) return nullptr;
//         stringstream ss(data);
//         string val;
//         getline(ss,val,',');
//         TreeNode* f = new TreeNode(stoi(val));
//         queue<TreeNode*>q;
//         q.push(f);
//         while(!q.empty())
//         {
//             TreeNode* t = q.front();
//             q.pop();
//             string str;
//             getline(ss,str,',');
//             if(str=="#") t->left = nullptr;
//             else {
//                 TreeNode* s1 = new TreeNode(stoi(str));
//                 t->left = s1;
//                 q.push(t->left);
//             }
//             getline(ss,str,',');
//             if(str=="#") t->right = nullptr;
//             else {
//                 TreeNode* s1 = new TreeNode(stoi(str));
//                 t->right = s1;
//                 q.push(t->right);
//             }
//         }
//         return f;
//     }
// };