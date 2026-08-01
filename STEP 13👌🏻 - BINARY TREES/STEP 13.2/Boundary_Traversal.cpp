//TC-O(3N) SC-O(N) (RECURSION STACK SPACE)
// void leftb(TreeNode<int>* root, vector<int>& v)
// {
//     if(root->left == nullptr && root->right == nullptr) return;
//     v.push_back(root->data);
//     if(root->left != nullptr) leftb(root->left, v);
//     else leftb(root->right, v);
// }
// void leaf(TreeNode<int>* root, vector<int>& v)
// {
//     if(root == nullptr) return;
//     if(root->left == nullptr && root->right == nullptr) v.push_back(root->data);
//     if(root->left != nullptr) leaf(root->left, v);
//     if(root->right != nullptr) leaf(root->right, v);
// }
// void rightb(TreeNode<int>* root, vector<int>& v)
// {
//     if(root->left == nullptr && root->right == nullptr) return;
//     if(root->right != nullptr) rightb(root->right, v);
//     else rightb(root->left, v);
//     v.push_back(root->data);
// }
// vector<int> traverseBoundary(TreeNode<int>* root)
// {
//     // Write your code here.
//     if(root==nullptr) return {};
//     vector<int> v;
//     v.push_back(root->data);
//     if(root->left!=nullptr) leftb(root->left, v);
//     leaf(root, v);
//     if(root->right!=nullptr) rightb(root->right, v);
//     return v;
// }