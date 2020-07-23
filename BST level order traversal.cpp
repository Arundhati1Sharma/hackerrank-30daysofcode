#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        // Write the code here
void levelOrder(Node *root)
    {
        if(!root)
            return;
        
        queue<Node *> q;
        q.push(root);
            
        while(!q.empty())
        {
            Node *apt = q.front();
            q.pop();
            cout << apt->data << " ";
            
            if(apt->left)
                q.push(apt->left);
            if(apt->right)
                q.push(apt->right);
        }
    }
    };//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
