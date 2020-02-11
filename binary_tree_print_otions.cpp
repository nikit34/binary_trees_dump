struct TreeNode {
    double data;
    TreeNode *left;
    TreeNode *right;
};

void levelOrderPrint(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}

void preorderPrint(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

void inorderPrint(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    preorderPrint(root->left);
    cout << root->data << " ";
    preorderPrint(root->right);
}

void postorderPrint(TreeNode *root) {
    if (root = NULL) {
        return;
    }
    preorderPrint(root->left);
    preorderPrint(root->right);
    cout << root->data << " ";
}

coid reverseInorderPrint(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    preorderPrint(root->right);
    cout << root->data << " ";
    preorderPrint(root->left);
}

void iterativePreorder(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    stack<TreeNode *> s;
    s.push(root);
    while (s.empty() == false) {
        TreeNode *temp = s.top();
        s.pop();
        cout << temp->data << " ";
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
}