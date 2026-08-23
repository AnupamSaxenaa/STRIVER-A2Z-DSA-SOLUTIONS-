// | Complexity | Average Case | Worst Case |
// | ---------- | ------------ | ---------- |
// | **Time**   | **O(log N)** | **O(N)**   |
// | **Space**  | **O(log N)** | **O(N)**   |
// void calcpls(TreeNode<int> *node,int x,int &val)
// {
//     if(!node) return;
//     if(node->val<=x && node->val>val) val = node->val;
//     if(node->val >x) calcpls(node->left,x,val);
//     else calcpls(node->right,x,val);
//     return;
// }
// int floorInBST(TreeNode<int> * root, int X)
// {
//     // Write your code here.
//     int val = INT_MIN;
//     calcpls(root,X,val);
//     if(val==INT_MIN) return -1;
//     return val;
// }