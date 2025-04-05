/*
Time: 
Runtime: 
Link: https://leetcode.com/problems/binary-tree-paths/
Complexity: 
Space Complexity: 
*/
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
            void addPath(vector<string> &paths, string path, TreeNode* root){
                  if(root == nullptr) return;
                  if(!path.empty()) path += "->";
                  path += to_string(root->val);
                  if(root->left == nullptr && root->right == nullptr){
                        paths.push_back(path);
                        return;
                  }

                  addPath(paths, path, root->left);
                  addPath(paths, path, root->right);
            }
            vector<string> binaryTreePaths(TreeNode* root) {
                  vector<string> paths;
                  string path = "";
                  addPath(paths, path, root);
                  return paths;
            }
      };


int main()
{
      Solution s;
      TreeNode n1(1);
      TreeNode n2(2);
      TreeNode n3(3);
      TreeNode n4(4);
      TreeNode n5(5);
      TreeNode n6(6);
      TreeNode n7(7);
      n1.left = &n2;
      n1.right = &n3;
      n2.left = &n4;
      n2.right = &n5;
      n3.left = &n6;
      n3.right = &n7;
      bitset<8> n("10010011");


      vector<string> paths = s.binaryTreePaths(&n7);

      for(auto path : paths){
            cout<<path;
            cout<<endl;
      }
}