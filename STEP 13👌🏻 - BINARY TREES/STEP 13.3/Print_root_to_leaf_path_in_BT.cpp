//1.MY APPROACH - TC-O(2N) SC-O(2N) AT WC
// int calcpls(TreeNode<int>* root,int x,vector<int>& v)
// {
// 	if(root==nullptr) return 0;
// 	if(root->data==x){
// 		v.push_back(x);
// 		return 1;
// 	}
// 	int vl1 = calcpls(root->left,x,v);
// 	if(vl1==1){
// 		v.push_back(root->data);
// 		return 1;
// 	}
// 	int vl2 = calcpls(root->right,x,v);
// 	if(vl2==1){
// 		v.push_back(root->data);
// 		return 1;
// 	}
// }
// vector<int> pathInATree(TreeNode<int> *root, int x)
// {
//     // Write your code here.
// 	vector<int>ans;
// 	calcpls(root,x,ans);
// 	reverse(ans.begin(),ans.end());
// 	return ans;
// }

//2.STRIVER APPROACH - TC-O(N) SC-O(2N)
// bool calcpls(TreeNode<int>* root,int x,vector<int>& v)
// {
// 	if(root==nullptr) return false;
// 	v.push_back(root->data);
// 	if(root->data==x) return true;
// 	if(calcpls(root->left,x,v) || calcpls(root->right,x,v)) return true;
// 	v.pop_back();
// 	return false;
// }
// vector<int> pathInATree(TreeNode<int> *root, int x)
// {
//     // Write your code here.
// 	vector<int>ans;
// 	calcpls(root,x,ans);
// 	return ans;
// }
