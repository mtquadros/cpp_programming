#include <iostream>
#include <exception>

int main() {
    Node *root = new Node(50);
    std::vector<int> input{ 45,80,49,47,30,25,35 };

    for (auto elem : input)
    {
        root->insert(elem);
    }

}