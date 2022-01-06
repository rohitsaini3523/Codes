//============================================================================
// Name        : LAB2.cpp
// Author      : ROHIT
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class tnode
{
    string word;
    string meaning;
    tnode *left;
    tnode *right;
    friend class bst;
};

class bst
{
    tnode *root;

public:
    bst()
    {
        root = NULL;
    }
    void inorder_r() //driver
    {
        inorder_r(root);
    }
    tnode *copy_r()
    {
        return copy_r(root);
    }
    void create_nr();
    void inorder_r(tnode *root);
    tnode *copy_r(tnode *root);
};
void bst::inorder_r(tnode *temp)
{
    if (temp != NULL)
    {
        inorder_r(temp->left);
        cout << "Word: " << temp->word;
        cout << "\nMeaning: " << temp->meaning << endl;
        inorder_r(temp->right);
    }
}
tnode *bst::copy_r(tnode *root)
{
    tnode *temp;
    temp = NULL;
    if (root != NULL)
    {
        temp = new tnode;
        temp->word = root->word;
        temp->meaning = root->meaning;
        temp->left = copy_r(root->left);
        temp->right = copy_r(root->right);
    }
    return temp;
}

void bst::create_nr()
{
    tnode *temp, *curr;
    int flag;
    char choice;
    if (root == NULL)
    {
        root = new tnode;
        cout << "\nRoot Word: ";
        cin >> root->word;
        cout << "Root Meaning: ";
        cin >> root->meaning;
        root->left = NULL;
        root->right = NULL;
    }
    do
    {
        temp = root;
        flag = 0;
        curr = new tnode;
        cout << "Word: ";
        cin >> curr->word;
        cout << "Meaning: ";
        cin >> curr->meaning;
        while (flag == 0)
        {
            if (curr->word < temp->word)
            {
                if (temp->left == NULL)
                {
                    temp->left = curr;
                    flag = 1;
                }
                else
                    temp = temp->left;
            }
            else
            {

                if (temp->right == NULL)
                {
                    temp->right = curr;
                    flag = 1;
                }
                else
                    temp = temp->right;
            }
        }
        cout << "Want to Add More:(y/n)";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}
int main()
{
    bst b;
    b.create_nr();
    cout << "Inorder Display: \n";
    b.inorder_r();
    cout << "Copy Tree: \n";
    b.inorder_r(b.copy_r());
    return 0;
}
