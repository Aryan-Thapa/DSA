class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool ltor=true;
        while(!q.empty())
        {
            int width=q.size();
            vector<int>currentlevel(width);
            for(int i=0;i<width;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                int index=ltor ? i:width-i-1;
                currentlevel[index]=temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }

            }
            //toggle
            ltor=!ltor;
            ans.push_back(currentlevel);

        }
        return ans;
        
    }
};