#ifndef Wu
#define Wu
#define SLEN 20
#define MAXITEMS 10
#define bool int
#define true 1
#define false 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct item
{
    char petname[SLEN];
    char petkind[SLEN];

} Item;
typedef struct trnode
{
    Item item;
    struct trnode *left;
    struct trnode *right;
} Trnode;
typedef struct tree
{
    Trnode *root;
    int size;
} Tree;
void TreeInitialize(Tree *ptree);
bool TreeIsEmpty(const Tree *ptree);
bool TreeSeek(const Item *pi, const Tree *ptree);
bool TreeIsFull(const Tree *ptree);
int TreeItemCount(const Tree *ptree);
bool TreeAddItem(const Item *pi, Tree *ptree);
bool TreeIn(const Item *pi, Tree *ptree);
bool TreeDeleteItem(const Item *pi, Tree *ptree);
void TreeTraverse(const Tree *ptree, void (*pfun)(Item item));
//pfun指向一个接受Item且无返回值的函数,为树中的每一项执行一次
void TreeDelete(Tree *ptree);
static Trnode *TreeMakeNode(const Item *pi);
static void TreeAddNode(Trnode *nwe_node, Trnode *root);
#endif