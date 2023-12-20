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
        this->left=NULL;
        this->right=NULL;
    }
    
};
int findpos(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
Node* buildtreefromInPRE(int inorder[],int preorder[],int size, int &preindex,int inorderstart,int inorderend)
{
    //base case
    if(preindex>=size || inorderstart>inorderend)
    {
        return NULL;
    }
    //step A extract the root element from the preorder array
    int element=preorder[preindex++];
    //creating a root node from the element
    Node*root=new Node(element);
    //find the position of that element in the inorder array
    int pos=findpos(inorder,size,element);
    //step B rec call for the left part 
    root->left=buildtreefromInPRE(inorder,preorder,size,preindex,inorderstart,pos-1);
    //step C
    root->right=buildtreefromInPRE(inorder,preorder,size,preindex,pos+1,inorderend);
    return root;
}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}
Node* buildtreefromInPRE(int inorder[],int preorder[],int size, int &preindex,int inorderstart,int inorderend)
{
    //bc
    

}

int main()
{
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,30,40,50,30,60,70};
    int size=7;
    int preindex=0;
    int inorderstart=0;
    int inorderend=size-1;

    cout<<"building tree:"<<endl;
    Node* root=buildtreefromInPRE(inorder,preorder,size,preindex,inorderstart,inorderend);
    cout<<endl<<"Printing level order traversal"<<endl;
    levelOrderTraversal(root);
    return 0;
}