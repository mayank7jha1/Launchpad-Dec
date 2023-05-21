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


int main() {
	node* root = buildtree();
	Preorder(root);
	cout << endl;
	Inorder(root);
	cout << endl;
	Postorder(root);
	cout << endl;
	cout << Countnode(root) << " " << Sum(root) << endl;
	cout << height(root) << endl;
	Mirror(root);
	Preorder(root);
	cout << endl;
	cout << diameter(root) << endl;
	pair<int, int>p2 = fastdiameter(root);

	cout << p2.first << " " << p2.second << endl;

	Pair2 p = fastdiameter2(root);
	cout << p.height << " " << p.diameter << endl;

	Pair3 p1 = IsheightBalanced(root);
	cout << p1.height << " " << p1.isbalanced << endl;

}

//Build a Height Balanced Tree from an Array.









