// 1.USING PRINT PATH FROM LEAF TO ROOT - TC-O(3N) SC-O(3N)
// class Solution {
// public:
//     int findfun(TreeNode* root,vector<TreeNode*>& v,int x)
//     {
//         if(root==nullptr) return 0;
//         v.push_back(root);
//         if(root->val==x) return 1;
//         if(findfun(root->left,v,x) || findfun(root->right,v,x)) return 1;
//         v.pop_back();
//         return 0;
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*>forp,forq;
//         findfun(root,forp,p->val);
//         findfun(root,forq,q->val);
//         int i = 0 , j = 0 , m = forp.size() , n = forq.size();
//         while(i<m && j<n){
//             if(forp[i]->val!=forq[j]->val) return forq[i-1]; 
//             i++;
//             j++;
//         }
//         if(i==m) return forp[i-1];
//         if(j==n) return forq[j-1];
//         return nullptr;
//     }
// };

// 2.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     TreeNode* calcpls(TreeNode* root,TreeNode* p,TreeNode* q)
//     {
//         if(root==nullptr) return nullptr;
//         if(root==p || root==q) return root;
//         TreeNode* left = calcpls(root->left,p,q);
//         TreeNode* right = calcpls(root->right,p,q);
//         if((left==p && right==q) || (left==q && right==p)) return root;
//         if(left!=nullptr) return left;
//         if(right!=nullptr) return right;
//         return nullptr;
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode* ans = calcpls(root,p,q);
//         if(ans==nullptr) return root;
//         return ans;
//     }
// };
