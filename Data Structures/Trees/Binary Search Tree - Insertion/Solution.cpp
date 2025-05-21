#include <iostream>
#include <cstddef>
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        if (root == nullptr) {
            Node* newNode = new Node(data);
            return newNode;
        }
        
        Node* current = root;
        while (true) {
            if (current->data > data) {
                if (current->left != nullptr) {
                    current = current->left;
                }
                else {
                    Node* newNode = new Node(data);
                    current->left = newNode;
                    break;
                }
            }
            else {
                if (current->right != nullptr) {
                    current = current->right;
                }
                else {
                    Node* newNode = new Node(data);
                    current->right = newNode;
                    break;
                }
            }
        }
        return root;
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
	myTree.preOrder(root);
    return 0;
}
