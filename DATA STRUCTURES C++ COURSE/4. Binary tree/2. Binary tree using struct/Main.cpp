#include <iostream>

/* Node Structure */
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

/* Create New Node */
BstNode *createNode(int data)
{
    BstNode *newNode = new BstNode();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/* Insert Node in Binary Search Tree */
BstNode *insertNode(BstNode *root, int data)
{
    if (root == NULL)
        root = createNode(data);
    else if (data <= root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

/* Search Node Value in Binary Search Tree */
bool searchNode(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (data == root->data)
        return true;
    else if (data <= root->data)
        return searchNode(root->left, data);
    else
        return searchNode(root->right, data);
}

/* Find Minimal Node Value in Binary Search Tree */
BstNode *findMinNode(BstNode *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

/* Delete Node in Binary Search Tree */
BstNode *deleteNode(BstNode *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            BstNode *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            BstNode *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            BstNode *min = findMinNode(root->right);
            root->data = min->data;
            root->right = deleteNode(root->right, min->data);
        }
    }
    return root;
}

int main()
{
    BstNode *root = NULL;

    /* Insert Node with Value */
    root = insertNode(root, 12);
    root = insertNode(root, 15);
    root = insertNode(root, 5);
    root = insertNode(root, 53);
    root = insertNode(root, 98);
    root = insertNode(root, 0);

    /* Search Node by Value */
    std::cout << searchNode(root, 53) << std::endl;
    std::cout << searchNode(root, 42) << std::endl;
    std::cout << searchNode(root, 15) << std::endl;

    /* Delete Node by Value */
    root = deleteNode(root, 53);
    root = deleteNode(root, 15);

    /* Search Node by Value */
    std::cout << searchNode(root, 53) << std::endl;
    std::cout << searchNode(root, 15) << std::endl;
    return 0;
}