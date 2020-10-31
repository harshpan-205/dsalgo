bool isSameTree(TreeNode* p, TreeNode* q){
    if(!p && !q)    return true;
    if(!p || !q)    return false;
    queue<TreeNode*> q1, q2;
    q1.push(p);
    q2.push(q);
    while(!q1.empty() || !q2.empty()){
        TreeNode *m=q1.front();
        TreeNode *n=q2.front();
        if(m->val != n->val)    return false;
        if(m->left && n->left){
            q1.push(m->left);
            q2.push(n->left);
        }
        else if(m->left || n->left) return false;
        if(m->right && n->right){
            q1.push(m->right);
            q2.push(n->right);
        }
        else if(m->right || n->right) return false;
        q1.pop();
        q2.pop();
    }
    return true;
}
