
#include "iostream"

using namespace std;

const int MAX_NODES = 100;

class TreeNode
{
private:
public:
    string name;
    int leftchild_index;
    int rightchild_index;
    friend class BinaryTree;
};

class BinaryTree
{
public:
    void removaAllLeaf();
    void recurRemoveLeaf(int parent_id, int node_id, int left_or_right);
    TreeNode tree[MAX_NODES];

private:
    int root_index = 0;
    int free_index;
};

void BinaryTree::removaAllLeaf(){
    recurRemoveLeaf(root_index,tree[root_index].leftchild_index,0);
    recurRemoveLeaf(root_index,tree[root_index].rightchild_index,1);
};
void BinaryTree::recurRemoveLeaf(int parent_id, int node_id, int left_or_right)
{
    if (tree[node_id].leftchild_index != -1)
    {
        recurRemoveLeaf(node_id, tree[node_id].leftchild_index, 0);
    }
    if (tree[node_id].rightchild_index != -1)
    {
        recurRemoveLeaf(node_id, tree[node_id].rightchild_index, 1);
    }

     if (tree[node_id].leftchild_index == -1 && tree[node_id].rightchild_index == -1)
    {
        tree[node_id].name = "";
        if (left_or_right == 0)
        {
            tree[parent_id].leftchild_index = -1;
            return;
        }
        if (left_or_right == 1)
        {
            tree[parent_id].rightchild_index = -1;
            return;
        }
    }
};

int main()
{
    BinaryTree t;
    t.tree[0].name = "Jane";
    t.tree[0].leftchild_index = 1;
    t.tree[0].rightchild_index = 3;
    t.tree[1].name = "Bob";
    t.tree[1].leftchild_index = -1;
    t.tree[1].rightchild_index = 4;
    t.tree[3].name = "Alan";
    t.tree[3].leftchild_index = -1;
    t.tree[3].rightchild_index = 5;
    t.tree[4].name = "Ellen";
    t.tree[4].rightchild_index = -1;
    t.tree[4].leftchild_index = 2;
    t.tree[5].name = "Nancy";
    t.tree[5].leftchild_index = -1;
    t.tree[5].rightchild_index = -1;
    t.tree[2].name = "Tom";
    t.tree[2].leftchild_index =-1;
    t.tree[2].rightchild_index =-1;

    t.removaAllLeaf();

    cout << t.tree[0].name << endl;
    cout << t.tree[0].leftchild_index << endl;
    cout << t.tree[0].rightchild_index << endl;
    cout << t.tree[2].name << endl;
    cout << t.tree[4].name << endl;
    cout << t.tree[1].name << endl;
    cout << t.tree[3].name << endl;
    return 0;
}