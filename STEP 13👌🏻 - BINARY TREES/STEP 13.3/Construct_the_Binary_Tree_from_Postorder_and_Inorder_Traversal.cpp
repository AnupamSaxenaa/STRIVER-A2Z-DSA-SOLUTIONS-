//TC-O(2N) SC-O(2N)
// class Solution
// {
//     public:
//         unordered_map<int, int> mpp;
//     TreeNode* calcpls(vector<int>& inorder,int inS,int inE,vector<int>& postorder,int poS,int poE)
//     {   
//         //base
//         if(inS>inE || poS>poE) return nullptr;
//         //work
//         TreeNode* root = new TreeNode(postorder[poE]);
//         int idxin = mpp[root->val],lnodes = idxin-inS;
//         root->left = calcpls(inorder,inS,idxin-1,postorder,poS,poS+lnodes-1);
//         root->right = calcpls(inorder,idxin+1,inE,postorder,poS+lnodes,poE-1);
//        return root;
//     }
//     TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder)
//     {
//         for (int i = 0; i < inorder.size(); i++)
//             mpp[inorder[i]] = i;
//         return calcpls(inorder, 0, inorder.size() - 1, postorder,0, postorder.size() - 1);
//     }
// };