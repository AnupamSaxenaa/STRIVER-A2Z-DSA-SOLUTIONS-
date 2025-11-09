//1.(ITERATIVE) OPTIMAL SOLUTION - TC-O(N+NLONG+N) SC-O(N)

// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// 	vector<ll>v;
// 	while(!stack.empty()){
// 		ll temp = stack.top();
// 		stack.pop();
// 		v.push_back(temp);
// 	}

// 	sort(v.begin(),v.end());
// 	int n = v.size();
// 	int i = 0;
// 	while(i<n){
// 		stack.push(v[i]);
// 		i++;
// 	}
// 	return;
// }

//2.(RECURSIVE) BETTER SOLUTION - TC-O(N^2) SC-O(2N)(STACK SPACE)

// void sortedPush(stack<int> &s,int x){
// 	if(s.empty() || s.top()<=x) 
// 	{
// 		s.push(x);
// 		return;
// 	}

// 	int val = s.top();
// 	s.pop();
// 	sortedPush(s,x);
// 	s.push(val);
// 	return;
// }

// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// 	if(stack.empty()) return;
// 	int val = stack.top();
// 	stack.pop();
// 	sortStack(stack);
// 	sortedPush(stack,val);
// 	return;
// }
