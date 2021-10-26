#include <iostream>
#include <random>
#include "BST_Node.h"

int main(int argc, char** argv)
{
    Node* root = 0;
    
    int min = 1, max = 10;
    int lookFor = 0;
    std::cin >> lookFor;

    for (int i = 0; i < 5; i++)
    {
        Add(&root, new Node(min + (std::rand() % (max - min + 1))));
    }
    //need to make this run through a switch case
    Find(root, lookFor);

    Print(root);

	return EXIT_SUCCESS;
}

