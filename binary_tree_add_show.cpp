#include <iostream>

using namespace std;


struct tree {
	tree* l, * r;
	int x;
};

void Add(int x, tree** node) {
	if (*node == NULL) {
		(*node) = new tree;
		(*node)->l = (*node)->r = NULL;
		(*node)->x = x;
	}
	else
		if (x < (int)(*node)->l)
			Add(x, &(*node)->l);
		else
			Add(x, &(*node)->r);
}

void Show(tree* node) {
	if (node == NULL) return;
	cout << node->x << endl;
	Show(node->l);
	Show(node->r);
}

void main() {
	int x,k;
	tree* mytree = NULL;
	cout << "count = "; cin >> k;
	for (int i = 0; i < k; i++) {
		cout << "node = "; cin >> x;
		Add(x, &mytree);
	}
	Show(mytree);
}