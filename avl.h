// implements an AVL Tree
// by Peter Master, 11/26/16

#ifndef AVL_H_
#define AVL_H_
#define Element int32_t

#include <string>

class AVLTree
{
public:
    AVLTree ();
    virtual ~AVLTree ();
    void Insert (Element val);
    // chooses smallest node on the right subtree when deleting a node with two children
    void Delete (Element val);
    bool Access (Element val);
    std::string PrintPreOrder () const;
    std::string PrintInOrder () const;

private:
    struct BinaryNode {
        Element elem;
        BinaryNode *left;
        BinaryNode *right;

        BinaryNode(): elem(0), left(NULL), right(NULL) {}
        BinaryNode(const Element &e, BinaryNode *lt, BinaryNode *rt): elem(e), left(lt), right(rt) {}
    } *root;

    BinaryNode* getMin(BinaryNode *t);
    void makeEmpty(BinaryNode *t);
	bool Insert(const Element e, BinaryNode * & t);
	bool Access(const Element e, BinaryNode * & t);
	bool Delete(const Element e, BinaryNode * & t);
};

#endif /* end of include guard: AVL_H_ */