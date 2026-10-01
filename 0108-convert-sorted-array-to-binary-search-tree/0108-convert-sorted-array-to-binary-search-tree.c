/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* create(int data){
    struct TreeNode* newNode=malloc(sizeof(struct TreeNode));
    newNode->val=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
} 
struct TreeNode* insert(struct TreeNode *root,int data){
    if(root==NULL){
        return create(data);
    }else if(data<root->val){
        root->left=insert(root->left,data);
    }else{
        root->right=insert(root->right,data);
    }
    return root;
}
void insertBST(struct TreeNode** root, int* nums,int left,int right){
    if(left>right){
        return;
    }
    int mid=left + (right-left)/2;
    *root=insert(*root,nums[mid]);

    insertBST(root,nums,left,mid-1);
    insertBST(root,nums,mid+1,right);
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    struct TreeNode *root=NULL;
    insertBST(&root,nums,0,numsSize-1);
    return root;
}