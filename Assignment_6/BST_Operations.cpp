
#include <iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }

    BST(int info)
    {
        data = info;
        left = right = NULL;
    }

    BST *Insert(BST *root, int value)
    {
        if (!root)
        {
            return new BST(value);
        }

        if (value > root->data)
        {

            root->right = Insert(root->right, value);
        }
        else
        {

            root->left = Insert(root->left, value);
        }

        return root;
    }

    void Inorder(BST *root)
    {
        if (!root)
        {
            return;
        }
        Inorder(root->left);
        cout << root->data << endl;
        Inorder(root->right);
    }

    BST * minValueNode(BST *node)
    {
        BST* current = node;

        
        while (current && current->left != NULL)
            current = current->left;

        return current;
    }

    BST * deleteNode(BST *root, int key)
    {
        if (root == NULL)
            return root;

        if (key < root->data)
            root->left = deleteNode(root->left, key);

        else if (key > root->data)
            root->right = deleteNode(root->right, key);

        else
        {

            if (root->left == NULL)
            {
                BST *temp = root->right;
                free(root);
                return temp;
            }
            else if (root->right == NULL)
            {
                BST *temp = root->left;
                free(root);
                return temp;
            }

            BST *temp = minValueNode(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }
};

int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
    b.Inorder(root);
    b.deleteNode(root, 20);
    return 0;
}