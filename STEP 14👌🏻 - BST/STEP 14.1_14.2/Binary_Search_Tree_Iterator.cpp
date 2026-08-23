
// class BSTIterator {
// public:
//     stack<TreeNode*>s;
//     void pushleft(TreeNode* root)
//     {
//         while(root){
//             s.push(root);
//             root = root->left;
//         }
//         return;
//     }
//     BSTIterator(TreeNode* root) {
//         pushleft(root);
//     }
//     int next() {
//         TreeNode* f = s.top();
//         s.pop();
//         pushleft(f->right);
//         return f->val;
//     }
//     bool hasNext() {
//         return !s.empty();
//     }
// };

// Constructor: TC = O(H), SC = O(H)
// next(): Amortized TC = O(1) (Worst Case = O(H)), SC = O(H)
// hasNext(): TC = O(1), SC = O(1)