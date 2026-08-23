//TC-O(N) SC-O(1) <--WC
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         TreeNode* temp = root;
//         while(temp)
//         {
//             if(p->val<temp->val && q->val<temp->val) temp = temp->left;
//             else if(p->val>temp->val && q->val>temp->val) temp = temp->right;
//             else return temp;
//         }
//         return nullptr;
//     }
// };