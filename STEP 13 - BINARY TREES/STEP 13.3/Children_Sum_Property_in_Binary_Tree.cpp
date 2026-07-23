//1.OPTIMAL SOLUTION - TC-O(N) SC-O(N)
// void calcpls(BinaryTreeNode < int > * &root)
// {
//     if(!root) return;
//     if(root->left==nullptr && root->right==nullptr) return;
//     int l = 0 , r = 0;
//     if(root->left) l = root->left->data;
//     if(root->right) r = root->right->data;
//     int pres = root->data;
//     if(l+r > pres) root->data = l+r;
//     else {
//         if(root->left) root->left->data = root->data;
//         if(root->right) root->right->data = root->data;
//     }
//     calcpls(root->left);
//     calcpls(root->right);  
//     int tot = 0;
//     if(root->left) tot+=root->left->data;
//     if(root->right) tot+=root->right->data;
//     root->data = tot;
// }
// void changeTree(BinaryTreeNode < int > * root) {
//     // Write your code here.
//     BinaryTreeNode < int > * temp = root;
//     calcpls(temp);
// } 