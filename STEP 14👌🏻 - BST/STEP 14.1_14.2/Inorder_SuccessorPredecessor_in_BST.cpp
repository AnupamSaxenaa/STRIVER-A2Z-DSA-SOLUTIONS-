//BRUTE SOLUTION - DO IT YOUR SELF TC-O(N+LOGN) SC-O(N)
//OPTIMAL SOLUTION - TC-O(H) SC-O(1)
// int successor(TreeNode* root,int key)
// {
//     int ans = INT_MAX;
//     while(root){
//         if(root->data > key && ans > root->data){
//             ans = root->data;
//             root = root->left;
//         }else{
//             root = root->right;
//         }
//     }
//     if(ans==INT_MAX) return -1;
//     return ans;
// }
// int predecessor(TreeNode* root,int key)
// {
//     int ans = INT_MIN;
//     while(root){
//         if(root->data < key && ans < root->data){
//             ans = root->data;
//             root = root->right;
//         }else{
//             root = root->left;
//         }
//     }
//     if(ans==INT_MIN) return -1;
//     return ans;
// }
// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     // Write your code here.
//     int x = predecessor(root,key);
//     int y = successor(root,key);
//     return {x,y};
// }


