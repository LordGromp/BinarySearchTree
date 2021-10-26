#pragma once
#include <iostream>

class Node
{
public:
    Node(int v)
    {
        data = v;
        left = 0;
        right = 0;
    }

    int data;
    Node* left;
    Node* right;
};

void Add(Node** root, Node* n)
{
    if (!*root)
    {
        *root = n;
        return;
    }

    if ((*root)->data < n->data)
    {
        Add(&(*root)->right, n);
    }
    else
    {
        Add(&(*root)->left, n);
    }
}

Node Find(Node* n, int findMe)
{
    
    while (n != NULL)
    {
        if (n->data == findMe)
        { 
            std::cout << "Found" << std::endl;
            return *n;
        }
        if (n->data < findMe)
        {

            n = n->right;
        }
        else
        {
            n = n->left;
        }
            
    }
    return NULL;
}

void Print(Node* node)
{
    if (!node)
    {
        return;
    }
    Print(node->left);
    printf("value = %i\n", node->data);
    Print(node->right);
}
