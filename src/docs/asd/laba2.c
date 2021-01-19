/*
    4 – 2. Для однозв’язного списку точок в R
    2
    реалізувати функції:

    а) додавання елемента у хвіст списку;
    б) видалення елемента з голови списку;
    в) визначити, чи елементи впорядковані (за спаданням, за
    зростанням, не відсортовані);
    г) надрукувати весь список, формат: “(x, y)”;
    д) видалити весь список.
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <sys/times.h>

#define N 10

typedef struct Node Node;

struct Node
{
    Node *next;
    double x;
    double y;
};

typedef enum
{
    ASC,
    DESC,
    RAND,
} caseType;

Node *newNode(double x, double y);
void addToTail(Node *head, Node *node);
Node *removeFromHead(Node *head);
int isSorted(Node *head);
void printList(Node *head);
void printNode(Node *node);
void deleteList(Node *head);
Node *newList(size_t n, caseType caseVal);
void freeList(Node *head);
int compareNodes(Node *nodeA, Node *nodeB);

int main(void)
{
    srand(times(NULL));
    Node *list;
    Node *nodeA;

    printf("Adding a node to the tail of the list:\n\n");
    list = newList(5, RAND);
    printf("\nSource List:\n");
    printList(list);
    printf("\nNode to add:\n");
    nodeA = newNode(100, 200);
    printNode(nodeA);
    printf("\n");
    addToTail(list, nodeA);
    printf("\nTarget List:\n");
    printList(list);
    free(list);
    free(nodeA);
    printf("----------------------------------------------------------------------------\n\n");

    printf("Removing a node from the head of the list:\n\n");
    list = newList(5, RAND);
    printf("\nSource List:\n");
    printList(list);
    list = removeFromHead(list);
    printf("\nTarget List:\n");
    printList(list);
    free(list);
    printf("----------------------------------------------------------------------------\n\n");

    printf("Check if a list is unsorted and sorted (ascending or descending):\n");
    printf("Function 'int isSorted(Node *head)' returns following values:\n");
    printf("    -1 if the list is sorted in descending order\n");
    printf("     0 if the list is unsorted\n");
    printf("     1 if the list is sorted in ascending order\n\n");

    Node *randList = newList(5, RAND);
    printf("Source List:\n");
    printList(randList);
    printf("isSorted: %d\n\n", isSorted(randList));

    Node *ascList = newList(5, ASC);
    printf("Source List:\n");
    printList(ascList);
    printf("isSorted: %d\n\n", isSorted(ascList));

    Node *descList = newList(5, DESC);
    printf("Source List:\n");
    printList(descList);
    printf("isSorted: %d\n\n", isSorted(descList));

    free(randList);
    free(ascList);
    free(descList);
    printf("----------------------------------------------------------------------------\n\n");

    exit(EXIT_SUCCESS);
}

Node *newNode(double x, double y)
{
    Node *node = malloc(sizeof(Node));
    if (node == NULL)
    {
        printf("Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    node->x = x;
    node->y = y;
    node->next = NULL;

    return node;
}

void printNode(Node *node)
{
    printf("(%f, %f)", node->x, node->y);
}

Node *newList(size_t n, caseType caseVal)
{
    Node *head = NULL;
    Node *curNode = NULL;

    for (size_t i = 0; i < n; i++)
    {
        double x;
        double y;

        switch (caseVal)
        {
        case ASC:
            x = (double)i;
            y = (double)i;
            break;

        case DESC:
            x = (double)n - i;
            y = (double)n - i;
            break;

        case RAND:
            x = (double)(rand() % 1000) / (double)(rand() % 1000);
            y = (double)(rand() % 1000) / (double)(rand() % 1000);
            break;

        default:
            break;
        }

        Node *node = newNode(x, y);

        if (head == NULL)
        {
            head = node;
        }
        else
        {
            curNode->next = node;
        }

        curNode = node;
    }

    return head;
}

int compareNodes(Node *nodeA, Node *nodeB)
{
    double absA = pow(nodeA->x, 2) + pow(nodeA->y, 2);
    double absB = pow(nodeB->x, 2) + pow(nodeB->y, 2);
    if (absA == absB)
    {
        return 0;
    }

    if (absA > absB)
    {
        return 1;
    }

    return -1;
}

void printList(Node *head)
{
    Node *curNode = head;

    while (curNode != NULL)
    {
        printNode(curNode);
        printf("\n");
        curNode = curNode->next;
    }
}

void addToTail(Node *head, Node *node)
{
    if (head == NULL)
    {
        head = node;
    }

    Node *curNode = head;

    while (curNode->next != NULL)
    {
        curNode = curNode->next;
    }

    curNode->next = node;
}

void freeList(Node *head)
{
    while (head != NULL)
    {
        Node *next = head->next;
        free(head);
        head = next;
    }
}

Node *removeFromHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *next = head->next;
    free(head);
    return next;
}

int isSorted(Node *head)
{
    int asc = 1;
    int desc = -1;

    if (head == NULL)
    {
        return 0;
    }

    Node *cur = head;

    while (cur->next != NULL)
    {
        int c = compareNodes(cur, cur->next);

        if (c == 1)
        {
            asc = 0;
        }

        if (c == -1)
        {
            desc = 0;
        }

        cur = cur->next;
    }

    return asc + desc;
}
