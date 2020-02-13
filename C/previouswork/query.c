#include "queue.h"
bool TreeAddItem(const Item *pi, Tree *ptree)
{
    Trnode *new_node;
    if (TreeIsFull(ptree))
    {
        fprintf(stderr, "Tree is full\n");
        return false;
    /*if (TreeSeek(pi, ptree).child != NULL)
    {
        fprintf(stderr, "Trying adding duplicate item");
        return false;
    }*/
    new_node = TreeMakeNode(pi);
    if (new_node == NULL)
    {
        fprintf(stderr, "Not a new node\n");
        return false;
    }
    //New node created;
    ptree->size++;
    if(ptree->root==NULL) //树为空
        ptree->root = new_node;
        else //树不为空则增加新节点
            TreeAddNode(new_node, ptree->root);
        return true;
}
static Trnode *TreeMakeNode(const Item *pi)//动态内存分配 初始化节点
{
    Trnode *new_node;
    new_node = (Trnode *)malloc(sizeof(Trnode));
    if(new_node!=NULL)
    {
        new_node->item=*pi;
        new_node->left = NULL;
        new_node->right= NULL;
    }
    return new_node;
}
//specific position and new one
static void TreeAddNode(Trnode *nwe_node, Trnode *root){
if (Toleft)
}