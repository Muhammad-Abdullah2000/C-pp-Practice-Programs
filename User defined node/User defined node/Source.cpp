#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};
Node* insertBST(Node* root, int val) {
    
    if (root == NULL) {
        return new Node(val);
    }
    
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}





int main() {

    Node* root = NULL;;

    root = insertBST(root, 5);
            
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
           
          
       
    
   

    inorder(root);
    cout << endl;
   
   
	

	return 0;
}


/*struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int val) {

   
    node* temp = new node;

    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
//void preorder(struct node* root) {
 //   if (root != NULL) {
  //      cout << root->data << " ";
  //      preorder(root->left);
  //      preorder(root->right);
  //  }
//}
//void postorder(struct node* root) {
 //   if (root != NULL) {

  //      postorder(root->left);
   //     postorder(root->right);
  //      cout << root->data << " ";
  //  }
//}


struct node* insertNode(struct node* node, int val) {
    if (node == NULL) return createNode(val);
    if (val < node->data)
        node->left = insertNode(node->left, val);
    else if (val > node->data)
        node->right = insertNode(node->right, val);
    return node;
}
int main() {
    struct node* root = NULL;
    int value;
    

    root = insertNode(root, 4);
    cout << "Enter value to create a Node" << endl;
    cin >> value;
   // insertNode(root, 5);
   // insertNode(root, 2);
  //  insertNode(root, 9);
  //  insertNode(root, 1);
   // insertNode(root, 3);
  //  insertNode(root, value);
  //  cin >> value;
  //  insertNode(root, value);
  //  cin >> value;
  //  insertNode(root, value);
  //  cin >> value;
  //  insertNode(root, value);
  //  cin >> value;
  //  insertNode(root, value);
  //  cin >> value;

    cout << "In-Order traversal of the Binary Search Tree is: ";
    inorder(root);
  //  cout << endl;
  //  preorder(root);
  //  cout << endl;
  //  postorder(root);
    return 0;
} */