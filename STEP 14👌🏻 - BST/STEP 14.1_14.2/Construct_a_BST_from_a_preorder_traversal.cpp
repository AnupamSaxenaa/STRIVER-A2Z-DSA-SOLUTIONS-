//1.BRUTE SOLUTION - DO YOUR SELF!!

//2.BETTER SOLUTION - TC-O(NLOGN+3N) SC-O(3N)
// class Solution {
// public:
//     unordered_map<int,int>m;
//     TreeNode* calcpls(vector<int>& preorder,int preS,int preE,vector<int>& inorder,int inS,int inE)
//     {
//         //base
//         if(preS>preE || inS>inE) return nullptr;
//         //work
//         TreeNode* root = new TreeNode(preorder[preS]);
//         int idxInorder = m[preorder[preS]],lnodes = idxInorder-inS;
//         root->left = calcpls(preorder,preS+1,preS+lnodes,inorder,inS,idxInorder-1);
//         root->right = calcpls(preorder,preS+lnodes+1,preE,inorder,idxInorder+1,inE);
//         return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         vector<int>inorder;
//         inorder = preorder;
//         sort(inorder.begin(),inorder.end());
//         for(int i = 0 ; i < inorder.size() ; i++)
//             m[inorder[i]] = i;
//         return calcpls(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
//     }
// };

//3.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// class Solution {
// public:
//     TreeNode* calcpls(vector<int>& pr, int &i, int bound) {
//         //base
//         if (i >= pr.size() || pr[i] > bound) return nullptr;
//         //work
//         TreeNode* mt = new TreeNode(pr[i++]);
//         mt->left = calcpls(pr, i, mt->val);
//         mt->right = calcpls(pr, i, bound);
//         return mt;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int i = 0;
//         return calcpls(preorder, i, INT_MAX);
//     }
// };
