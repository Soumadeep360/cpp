class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        // T:O(n) and S:O(1):- [optimised space]  YT:https://www.youtube.com/watch?v=EuhrPsgc0L8&t=304s
        //Morriss:-
        vector<int>ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left==NULL) //if left of root does not exsits..
            {
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{  
                /*if left exsits then :
                1. take a pre variable and store curr ka left.
                2. now go extreme right of pre and build the thread to curr
                3. then in order to move curr to left first assign it to temp and then move curr then 
                make temp->left =NULL to avoid looping. */
                TreeNode* pre=curr->left;
                while(pre->right!=NULL)
                    pre=pre->right;
                pre->right=curr;
                TreeNode* temp=curr; // we need temp to break the connection as we also need to move the curr to left..
                curr=curr->left;
                temp->left=NULL;

            }
        }
        return ans;
    }
};
