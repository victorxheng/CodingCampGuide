#include <bits/stdc++.h>

using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {        
        int layer = 0;
        int numInLayer = 0;
        queue<TreeNode*> q;
        queue<TreeNode*> q2;
        stack<int> s;
        
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            numInLayer++;
            
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            if(node->left && layer % 2 == 0){
                q2.push(node->left);
                s.push(node->left->val);
            }
            if(node->right && layer % 2 == 0){
                q2.push(node->right);
                s.push(node->right->val);
            }

            if(numInLayer >= pow(2,layer)){
                if(layer % 2 == 1){           
                    while(!q2.empty()){
                        TreeNode* n = q2.front();
                        int num = s.top();
                        s.pop();
                        n -> val = num;
                        q2.pop();
                    }
                }     
                layer++;
                numInLayer = 0;                
            }        
        }

        return root;

    }
};