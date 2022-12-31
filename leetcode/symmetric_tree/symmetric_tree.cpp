#include <bits/stdc++.h>

using namespace std;

  Definition for a binary tree node.
  struct TreeNode
  {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution
  {
  public:
      bool isSymmetric(TreeNode *root)
      {
          if (root == nullptr)
          {
              return true;
          }

          return isSymmetric_test(root->left, root->right);
      }
      bool isSymmetric_test(TreeNode *left, TreeNode *right)
      {
          if (left == nullptr && right == nullptr)
          {
              return true;
          }
          else if (left == nullptr || right == nullptr)
          {
              return false;
          }
          else if (left->val != right->val)
          {
              return false;
          }
          return isSymmetric_test(left->left, right->right) && isSymmetric_test(left->right, right->left);
      }
  };

  int main()
  {
      Solution s;
      s.isSymmetric();
  }