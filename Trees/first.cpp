void inordertraversal(Node* root)
{
    //bc
    if(root==NULL)
    {
        return;
    }
    //lnr
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void preordertraversal(Node* root)
{
    //bc
    if(root==NULL)
    {
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(Node* root)
{
    //bc
    if(root==NULL)
    {
        return;
    }
    //LRN
    inordertraversal(root->left);
    inordertraversal(root->right);
     cout<<root->data<<" ";
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}