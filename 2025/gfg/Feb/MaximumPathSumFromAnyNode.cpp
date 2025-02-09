class Solution {
  public:
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
        int maxi = INT_MIN;
        maxPath(root, maxi);
        return maxi;
    }
    
    int maxPath(Node *root, int &maxi){
        if(!root) return 0;
        
        int left = max(0, maxPath(root->left, maxi));
        int right = max(0, maxPath(root->right, maxi));
        
        maxi = max(maxi, left+right+root->data);
        return max(left, right)+root->data;
    }
};