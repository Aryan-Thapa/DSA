#include <iostream>
using namespace std;
#include<queue>
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
//levelordertraversal
void levelordertraversal(Node*root)
{
    //queue create
    queue<Node*>q;
    //root/node push
    q.push(root);
    //null
    q.push(NULL);
    while(!q.empty())
    {
        //step A
        Node* temp=q.front();
        //step B
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
        //step C
        cout<<temp->data<<" ";
        //step D
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        }
        
    }
}
//inorder LNR
void inordertraversal(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    //LNR
    //Left mai jao
    inordertraversal(root->left);
    //current node ko print
    cout<<root->data<<" ";
    //right mai jao
    inordertraversal(root->right);
}
//preorder NLR
void preorder(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    //current node
    cout<<root->data<<" ";
    //left mai jao
    preorder(root->left);
    //right
    preorder(root->right);

}
//post order
void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    //LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* buildtree()
{
    int data;
    cout<<"Enter data:"<<endl;
    cin>>data;
    //base case
    if(data==-1)
    {
        return NULL;
    }
    //step A
    Node* root=new Node(data);
    cout<<"Enter data for left node"<<endl;
    root->left=buildtree();
    cout<<"Enter data for right node"<<endl;
    root->right=buildtree();

    return root;
}
int main()
{
    Node* root=NULL;

    root=buildtree();
    levelordertraversal(root);
}