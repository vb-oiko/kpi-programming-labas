/*
* Реалізувати функцію зчитування вузлів дерева з файла
* 
* Реалізувати друк ключів вузлів дерева (у консоль або файл),
* використовуючи обходи:
* а) прямий;
* б) симетричний;
* в) зворотній;
* г) по рівнях.
* 
* Розробити та реалізувати алгоритм розв’язання задачі згідно з номером варіанту.
* Варіант2. Обчислити суму ключів вузлів правого піддерева.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define N 20

typedef struct Node Node;

struct Node
{
    Node *left;
    Node *right;
    int key;
};

int *readIntArray(FILE *fptr, int n);
char **split_string(char *str);
char *readline(FILE *fptr);
FILE *openFile(const char *filename);
void printIntArray(int *arr, int n);
Node *newNode(int key);
Node *fillTreeFromArray(int *arr, int n);
Node *addNode(Node *parent, int key);
void freeTree(Node *node);
void printNode(Node *node);
void traversePreOrder(Node *node, void (*callback)(Node *));
void traverseInOrder(Node *node, void (*callback)(Node *));
void traversePostOrder(Node *node, void (*callback)(Node *));
int depthLimitedPreOrder(Node *node, size_t depth, void (*callback)(Node *));
void traverseLevelOrder(Node *root, void (*callback)(Node *));
int sumKeys(Node *subTree);
int sumRightSubtreeKeys(Node *subTree);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please provide the name of the file with data as a command line parameter\n\n");
        exit(EXIT_FAILURE);
    }

    const char *filename = argv[1];

    FILE *file = openFile(filename);
    int *arr = readIntArray(file, N);
    printf("%15s: ", "Source data");
    printIntArray(arr, N);

    Node *root = fillTreeFromArray(arr, N);

    printf("%15s: ", "PreOrder");
    traversePreOrder(root, printNode);
    printf("\n");

    printf("%15s: ", "InOrder");
    traverseInOrder(root, printNode);
    printf("\n");

    printf("%15s: ", "PostOrder");
    traversePostOrder(root, printNode);
    printf("\n");

    printf("%15s: ", "LevelOrder");
    traverseLevelOrder(root, printNode);
    printf("\n");

    printf("Sum of the keys of the right sub tree: %d", sumRightSubtreeKeys(root));
    printf("\n");

    printf("\n");
    printf("\n");

    fclose(file);
    free(arr);
    freeTree(root);
    exit(EXIT_SUCCESS);
}

int *readIntArray(FILE *fptr, int n)
{
    char **c_temp = split_string(readline(fptr));

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        char *c_item_endptr;
        char *c_item_str = *(c_temp + i);
        int c_item = strtol(c_item_str, &c_item_endptr, 10);

        if (c_item_endptr == c_item_str || *c_item_endptr != '\0')
        {
            exit(EXIT_FAILURE);
        }

        *(arr + i) = c_item;
    }

    return arr;
}

char **split_string(char *str)
{
    char **splits = NULL;
    char *token = strtok(str, " ");

    int spaces = 0;

    while (token)
    {
        splits = realloc(splits, sizeof(char *) * ++spaces);
        if (!splits)
        {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

char *readline(FILE *fptr)
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (1)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, fptr);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data)
        {
            break;
        }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

FILE *openFile(const char *filename)
{
    FILE *fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error! opening file: %s\n\n", filename);
        exit(EXIT_FAILURE);
    }

    return fptr;
}

void printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

Node *newNode(int key)
{
    Node *node = malloc(sizeof(Node));
    if (node == NULL)
    {
        printf("Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    node->key = key;
    node->left = NULL;
    node->right = NULL;

    return node;
}

Node *fillTreeFromArray(int *arr, int n)
{
    if (n <= 0)
    {
        return NULL;
    }

    Node *root = newNode(arr[0]);

    for (int i = 1; i < n; i++)
    {
        addNode(root, arr[i]);
    }

    return root;
}

Node *addNode(Node *parent, int key)
{
    if (key == parent->key)
    {
        return parent;
    }

    if (key < parent->key)
    {
        if (parent->left != NULL)
        {
            return addNode(parent->left, key);
        }
        else
        {
            parent->left = newNode(key);
            return parent->left;
        }
    }

    if (key > parent->key)
    {
        if (parent->right != NULL)
        {
            return addNode(parent->right, key);
        }
        else
        {
            parent->right = newNode(key);
            return parent->right;
        }
    }
}

void freeTree(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

void printNode(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    printf("%5d", node->key);
}

void traversePreOrder(Node *node, void (*callback)(Node *))
{
    if (node == NULL)
    {
        return;
    }

    callback(node);
    traversePreOrder(node->left, callback);
    traversePreOrder(node->right, callback);
}

void traverseInOrder(Node *node, void (*callback)(Node *))
{
    if (node == NULL)
    {
        return;
    }

    traverseInOrder(node->left, callback);
    callback(node);
    traverseInOrder(node->right, callback);
}

void traversePostOrder(Node *node, void (*callback)(Node *))
{
    if (node == NULL)
    {
        return;
    }

    traversePostOrder(node->left, callback);
    traversePostOrder(node->right, callback);
    callback(node);
}

int depthLimitedPreOrder(Node *node, size_t depth, void (*callback)(Node *))
{
    if (node == NULL)
    {
        return 0;
    }

    if (depth == 0)
    {
        callback(node);
        return 1;
    }

    return depthLimitedPreOrder(node->left, depth - 1, callback) + depthLimitedPreOrder(node->right, depth - 1, callback);
}

void traverseLevelOrder(Node *root, void (*callback)(Node *))
{
    if (root == NULL)
    {
        return;
    }

    size_t i = 0;

    while (depthLimitedPreOrder(root, i, callback) != 0)
    {
        i++;
    }
}

int sumKeys(Node *subTree)
{
    if (subTree == NULL)
    {
        return 0;
    }

    return subTree->key + sumKeys(subTree->left) + sumKeys(subTree->right);
}

int sumRightSubtreeKeys(Node *subTree)
{
    if (subTree == NULL)
    {
        return 0;
    }

    return sumKeys(subTree->right);
}
