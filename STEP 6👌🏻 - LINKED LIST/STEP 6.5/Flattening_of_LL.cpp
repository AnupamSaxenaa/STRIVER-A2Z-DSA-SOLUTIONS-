//1.BRUTE SOLUTION - TC-O(2(N*M)+XLOGX) X = N*M SC-O(2(N*M))

// #include<bits/stdc++.h>
// Node* convertToll(vector<int>&box){
// 	Node* dummy = new Node(-1);
// 	Node* ite = dummy;
// 	for(auto &x : box){
// 		Node* temp = new Node(x);
// 		ite->child = temp;
// 		ite = ite->child;
// 	}

// 	return dummy->child;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	// Write your code here
// 	if(head==nullptr) return head;
// 	vector<int>box;
// 	Node* temp = head;
// 	while(temp){
// 		Node* temp2 = temp;
// 		while(temp2){
// 			box.push_back(temp2->data);
// 			temp2 = temp2->child;
// 		}
// 		temp = temp->next;
// 	}

// 	sort(box.begin(),box.end());
// 	return convertToll(box);
// }

//2.OPTIMAL SOLUTION - 

//(A) iterative - 
// Node* merge2ll(Node* t1 , Node* t2){
// 	Node* dummy = new Node(-1);
// 	Node* ite = dummy;
// 	while(t1 && t2){
// 		if(t1->data>=t2->data){
// 			ite->child = t2;
// 			ite = ite->child;
// 			t2 = t2->child;
// 		}
// 		else{
// 			ite->child = t1;
// 			ite = ite->child;
// 			t1 = t1->child;
// 		}
// 	}

// 	if(t1){
// 		ite->child = t1;
// 		ite = ite->child;
// 		t1 = t1->child;
// 	}

// 	if(t2){
// 		ite->child = t2;
// 		ite = ite->child;
// 		t2 = t2->child;
// 	}

// 	return dummy->child;
// }


// Node* flattenLinkedList(Node* head) 
// {
// 	// Write your code here
// 	if(head==nullptr || head->next==nullptr) return head;
// 	Node* merged = head;
// 	Node* nextl = head->next;
// 	while(nextl){
// 		Node* nextnextl = nextl->next;
// 		merged = merge2ll(merged,nextl);
// 		nextl = nextnextl;
// 	}

// 	return merged;

// }

//(B) recursive - 
// Node* merge2ll(Node* t1 , Node* t2){
// 	Node* dummy = new Node(-1);
// 	Node* ite = dummy;
// 	while(t1 && t2){
// 		if(t1->data>=t2->data){
// 			ite->child = t2;
// 			ite = ite->child;
// 			t2 = t2->child;
// 		}
// 		else{
// 			ite->child = t1;
// 			ite = ite->child;
// 			t1 = t1->child;
// 		}
// 	}

// 	if(t1){
// 		ite->child = t1;
// 		ite = ite->child;
// 		t1 = t1->child;
// 	}

// 	if(t2){
// 		ite->child = t2;
// 		ite = ite->child;
// 		t2 = t2->child;
// 	}

// 	return dummy->child;
// }


// Node* flattenLinkedList(Node* head) 
// {
// 	if(!head || !head->next) return head;
// 	Node* mergeHead = flattenLinkedList(head->next);
// 	return merge2ll(head,mergeHead);
// }