#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using  namespace std;


class node {
public:
	int data;
	node* left;
	node* right;

	node(int inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};

node* buildtree() {
	int x;
	cin >> x;
	if (x == -1) {
		return NULL;
	} else {
		node* n = new node(x);
		n->left = buildtree();
		n->right = buildtree();
		return n;
	}
}


void Preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node* root) {
	if (root == NULL) {
		return;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}

void Postorder(node* root) {
	if (root == NULL) {
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}


int Countnode(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = Countnode(root->left);
	int y = Countnode(root->right);

	return x + y + 1;
}

int Sum(node* root) {
	if (root == NULL) {
		return 0;
	}

	int x = Sum(root->left);
	int y = Sum(root->right);

	return x + y + root->data;
}

int height(node* root) {
	if (root == NULL) {
		return 0;
	}

	int lsh = height(root->left);
	int rsh = height(root->right);

	return max(lsh, rsh) + 1;
}

void Mirror(node* &root) {
	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);
	Mirror(root->left);
	Mirror(root->right);
}

//O(n^2);
int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}

	int Option1 = diameter(root->left);
	int Option2 = diameter(root->right);
	int Option3 = height(root->left) + height(root->right);

	return max(Option1, max(Option2, Option3));
	return max({Option1, Option2, Option3});
}
//O(n);
//pair ka first = diameter
//pair ka second is height
pair<int, int>fastdiameter(node* root) {
	pair<int, int>p;

	if (root == NULL) {
		p.second = 0;
		p.first = 0;
		return p;
	}


	pair<int, int>LSTI = fastdiameter(root->left);
	pair<int, int>RSTI = fastdiameter(root->right);

	p.second = max(LSTI.second, RSTI.second) + 1;

	int op1 = LSTI.first;
	int op2 = RSTI.first;
	int op3 = LSTI.second + RSTI.second;

	p.first = max({op1, op2, op3});

	return p;
}

class Pair2 {
public:
	int height;
	int diameter;
};

Pair2 fastdiameter2(node* root) {
	Pair2 p;
	if (root == NULL) {
		p.height = 0;
		p.diameter = 0;
		return p;
	}

	Pair2 LSTI = fastdiameter2(root->left);
	Pair2 RSTI = fastdiameter2(root->right);

	p.height = max(LSTI.height, RSTI.height) + 1;
	int op1 = LSTI.diameter;
	int op2 = RSTI.diameter;
	int op3 = LSTI.height + RSTI.height;

	p.diameter = max({op1, op2, op3});
	return p;
}

//Height Balanced Tree:

class Pair3 {
public:
	int height;
	bool isbalanced;
};

Pair3 IsheightBalanced(node* root) {
	Pair3 p;
	if (root == NULL) {
		p.height = 0;
		p.isbalanced = true;
		return p;
	}

	Pair3 LSTI = IsheightBalanced(root->left);
	Pair3 RSTI = IsheightBalanced(root->right);

	p.height = max(LSTI.height, RSTI.height) + 1;

	if (LSTI.isbalanced == 1 and
	        RSTI.isbalanced == 1 and
	        abs(LSTI.height - RSTI.height) <= 1) {

		p.isbalanced = true;
	} else {
		p.isbalanced = false;
	}
	return p;
}

//Print Kth level

void PrintKthLevel(node* root, int k) {

	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
	}

	PrintKthLevel(root->left, k - 1);
	PrintKthLevel(root->right, k - 1);
}

//O(n^2);
void PrintALLevel(node* root) {
	int h = height(root);

	for (int i = 1; i <= h; i++) {
		PrintKthLevel(root, i);
		cout << endl;
	}
}

//Level Order Traversal (BFS)

void bfs(node* root) {

	queue<node*>q;
	q.push(root);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		cout << f->data << " ";

		if (f->left != NULL) {
			q.push(f->left);
		}
		if (f->right != NULL) {
			q.push(f->right);
		}
	}
}


void bfs2(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while (q.empty() == 0) {
		node* f = q.front();

		if (f == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			q.pop();
			cout << f->data << " ";

			if (f->left != NULL) {
				q.push(f->left);
			}
			if (f->right != NULL) {
				q.push(f->right);
			}
		}
	}
}

node* buildTreefromArray(int* a, int s, int e) {

	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;
	node* root = new node(a[mid]);
	root->left = buildTreefromArray(a, s, mid - 1);
	root->right = buildTreefromArray(a, mid + 1, e);
	return root;
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	node* root = buildTreefromArray(a, 0, 8);

	Pair3 check = IsheightBalanced(root);
	cout << check.isbalanced << endl;
	bfs2(root);

}











