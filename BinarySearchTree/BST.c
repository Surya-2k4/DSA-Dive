//Program to illustrate the implementation of Insert, Delete and Searching operations on a binary search tree.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int x) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node *Search(struct node *root, int x) {
    if (root == NULL || root->data == x)
        return root;
    else if (x > root->data)
        return Search(root->right, x);
    else
        return Search(root->left, x);
}

struct node *insert(struct node *root, int x) {
    if (root == NULL)
        return new_node(x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    else
        root->left = insert(root->left, x);
    return root;
}

struct node *delete(struct node *root, int x) {
    if (root == NULL)
        return NULL;
    if (x > root->data)
        root->right = delete(root->right, x);
    else if (x < root->data)
        root->left = delete(root->left, x);
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else if (root->left == NULL || root->right == NULL) {
            struct node *temp = (root->left == NULL) ? root->right : root->left;
            free(root);
            return temp;
        } else {
            struct node *parent = root;
            struct node *successor = root->right;
            while (successor->left != NULL) {
                parent = successor;
                successor = successor->left;
            }
            root->data = successor->data;
            if (parent->left == successor)
                parent->left = successor->right;
            else
                parent->right = successor->right;
            free(successor);
        }
    }
    return root;
}

int main() {
    struct node *root = NULL;
    int choice, value;
    printf("\t\tBinary Search Tree\n\n");
    while (1) {
        printf("\n1. Insert\n2. Search\n3. Delete\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                printf("Inserted %d\n", value);
                break;

            case 2:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (Search(root, value) != NULL)
                    printf("Value %d found in the tree\n", value);
                else
                    printf("Value %d not found in the tree\n", value);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = delete(root, value);
                printf("Deleted %d if it was found in the tree\n", value);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
