//1.BT REPRESENTATION
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val)
//     {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

//2.PREORDER TRAVERSAL - TC-O(N) SC-O(N)
// class Solution {
// public:
//     void calpls(TreeNode* root,vector<int>& ans)
//     {
//         if(root==nullptr) return;
//         ans.push_back(root->val);
//         calpls(root->left,ans);
//         calpls(root->right,ans);
//         return;
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>v;
//         calpls(root,v);
//         return v;
//     }
// };

//3.INORDER TRAVERSAL - TC-O(N) SC-O(N)
// class Solution {
// public:
//     void calcpls(TreeNode* root,vector<int>& v)
//     {
//         if(root==nullptr) return;
//         calcpls(root->left,v);
//         v.push_back(root->val);
//         calcpls(root->right,v);
//         return;
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>v;
//         calcpls(root,v);
//         return v;
//     }
// };

//4.POSTORDER TRAVERSAL - TC-O(N) SC-O(N)
// class Solution {
// public:
//     void calcpls(TreeNode* root,vector<int>& v)
//     {
//         if(root==nullptr) return;
//         calcpls(root->left,v);
//         calcpls(root->right,v);
//         v.push_back(root->val);
//         return;
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>v;
//         calcpls(root,v);
//         return v;
//     }
// };

//5.LEVEL ORDER TRAVERSAL OR BFS - TC-O(N) SC-O(N)
// class Solution
// {
//     public:
//         vector<vector < int>> levelOrder(TreeNode *root)
//         {
//             if(root==nullptr) return {};
//             queue<TreeNode*> q;
//             vector<vector < int>> v;
//             q.push(root);
//             while (!q.empty())
//             {
//                 vector<int> tmp;
//                 int n = q.size();
//                 while (n)
//                 {
//                     TreeNode* f = q.front();
//                     q.pop();
//                     if(f->left!=nullptr) q.push(f->left);
//                     if(f->right!=nullptr) q.push(f->right);
//                     tmp.push_back(f->val);
//                     n--;
//                 }
//                 v.push_back(tmp);
//             }
//             return v;
//         }
// };

//6.ITERATIVE PREORDER TRAVERSAL - TC-(N) SC-O(N)
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         if(root==nullptr) return {};
//         stack<TreeNode*>s;
//         vector<int>v;
//         s.push(root);
//         while(!s.empty()){
//             TreeNode* t = s.top();
//             s.pop();
//             v.push_back(t->val);
//             if(t->right!=nullptr) s.push(t->right);
//             if(t->left!=nullptr) s.push(t->left);
//         }
//         return v;
//     }
// };

//7.ITERATIVE INORDER TRAVERSAL - TC-O(N) SC-O(N)
// class Solution
// {
//     public:
//         vector<int> inorderTraversal(TreeNode *root)
//         {
//             vector<int> v;
//             stack<TreeNode*> s;
//             TreeNode *t = root;
//             while (true)
//             {
//                 if (t != nullptr)
//                 {
//                     s.push(t);
//                     t = t->left;
//                 }
//                 else
//                 {
//                     if (s.empty()) break;
//                     TreeNode *temp = s.top();
//                     s.pop();
//                     v.push_back(temp->val);
//                     t = temp->right;
//                 }
//             }
//             return v;
//         }
// };

//8.Post-order Traversal of Binary Tree using 2 stack - TC-O(N) SC-O(2N)
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         if(root==nullptr) return {};
//         stack<TreeNode*>s1;
//         vector<int>v;
//         s1.push(root);
//         while(!s1.empty())
//         {
//             TreeNode* top = s1.top();
//             s1.pop();
//             v.push_back(top->val);
//             if(top->left!=nullptr) s1.push(top->left);
//             if(top->right!=nullptr) s1.push(top->right);
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };

//9.Post-order Traversal of Binary Tree using 1 stack - TC-O(2N) SC-O(N)
// class Solution
// {
//     public:
//         vector<int> postorderTraversal(TreeNode *root)
//         {
//             vector<int> v;
//             stack<TreeNode*> s;
//             TreeNode *curr = root;
//             while (!s.empty() || curr != nullptr)
//             {
//                 if (curr != nullptr)
//                 {
//                     s.push(curr);
//                     curr = curr->left;
//                 }
//                 else
//                 {
//                     TreeNode *temp = s.top()->right;
//                     if (temp != nullptr)
//                     {
//                         curr = temp;
//                     }
//                     else
//                     {
//                         temp = s.top();
//                         s.pop();
//                         v.push_back(temp->val);
//                         while (!s.empty() && s.top()->right == temp)
//                         {
//                             temp = s.top();
//                             s.pop();
//                             v.push_back(temp->val);
//                         }
//                     }
//                 }
//             }
//             return v;
//         }
// };


//10.Pre, Post, Inorder in one traversal - TC-O(3N) SC-O(4N)
// vector<vector<int>> getTreeTraversal(TreeNode *root){
//     // Write your code here.
//     if(root==nullptr) return {};
//     vector<int>preOrder,inOrder,postOrder;
//     stack<pair<TreeNode*,int>>s;
//     s.push({root,1});
//     vector<vector<int>>ans;

//     while(!s.empty())
//     {
//         pair<TreeNode*,int>p = s.top();
//         TreeNode* top = s.top().first;
//         int num = s.top().second;
//         s.pop();

//         if(num==1){
//             preOrder.push_back(top->data);
//             p.second++;
//             s.push(p);
//             if(top->left!=nullptr) s.push({top->left,1});
//         } 

//         else if(num==2){
//             inOrder.push_back(top->data);
//             p.second++;
//             s.push(p);
//             if(top->right!=nullptr) s.push({top->right,1});
//         }

//         else{
//             postOrder.push_back({top->data});
//         }

//     }
//     ans.push_back(inOrder);
//     ans.push_back(preOrder);    
//     ans.push_back(postOrder);
//     return ans;
// }