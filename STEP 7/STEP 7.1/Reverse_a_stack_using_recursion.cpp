//1.ITERATIVE APPROACH (OPTIMAL) - TC-O(2*N) SC-O(N)

// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     vector<int>v;
//     while(!stack.empty()){
//         v.push_back(stack.top());
//         stack.pop();
//     }

//     int i = 0 , n = v.size();
//     while(i<n){
//         stack.push(v[i]);
//         i++;
//     }
// }

//2.RECURSIVE APPROACH (BETTER) - TC-O(N^2) SC-O(2N)(STACK SPACE)

// void Push(stack<int> &s,int x){
// 	if(s.empty()) 
// 	{
// 		s.push(x);
// 		return;
// 	}

// 	int val = s.top();
// 	s.pop();
// 	Push(s,x);
// 	s.push(val);
// 	return;
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
// 	if(stack.empty()) return;
// 	int val = stack.top();
// 	stack.pop();
// 	reverseStack(stack);
// 	Push(stack,val);
// 	return;
// }

