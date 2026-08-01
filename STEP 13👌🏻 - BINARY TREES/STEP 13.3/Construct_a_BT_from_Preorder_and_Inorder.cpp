//TC-O(2N) SC-O(2N)
// class Solution {
// public:
//     unordered_map<int,int>mpp;
//     TreeNode* calcpls(vector<int>& preorder,int preS,int preE,vector<int>& inorder,int inS,int inE)
//     {
//         //base
//         if(preS>preE || inS>inE) return nullptr;
//         //work
//         TreeNode* root = new TreeNode(preorder[preS]);
//         int idxin = mpp[root->val],lnodes = idxin-inS;
//         root->left = calcpls(preorder,preS+1,preS+lnodes,inorder,inS,idxin-1);
//         root->right = calcpls(preorder,preS+lnodes+1,preE,inorder,idxin+1,inE);
//         return root;
//     }
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         for(int i = 0 ; i < inorder.size() ; i++)
//             mpp[inorder[i]] = i;
//         return calcpls(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
//     }
// };