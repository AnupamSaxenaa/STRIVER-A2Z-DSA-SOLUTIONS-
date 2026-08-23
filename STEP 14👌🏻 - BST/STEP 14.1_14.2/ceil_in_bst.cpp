// | Complexity | Average Case | Worst Case |
// | ---------- | ------------ | ---------- |
// | **Time**   | **O(log N)** | **O(N)**   |
// | **Space**  | **O(log N)** | **O(N)**   |
// void calcpls(BinaryTreeNode<int> *node,int x,int &val)
// {
//     if(!node) return;
//     if(node->data>=x && node->data<val) val = node->data;
    
//     if(node->data >x) calcpls(node->left,x,val);
//     else calcpls(node->right,x,val);
//     return;
// }

// int findCeil(BinaryTreeNode<int> *node, int x){
//     // Write your code here.
//     int val = INT_MAX;
//     calcpls(node,x,val);
//     if(val==INT_MAX) return -1;
//     return val;
// }