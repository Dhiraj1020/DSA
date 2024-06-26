#ifndef BST_H
#define BST_H

#include <iostream>

class CTreeNode
{
    public:
    int iValue;
    CTreeNode* m_pLeftNode;
    CTreeNode* m_pRightNode;

    CTreeNode()
    {

    }

    CTreeNode(int t_iValue) : iValue(t_iValue),
    m_pLeftNode(nullptr),
    m_pRightNode(nullptr)
    {
        
    }
};

class CBST
{
    CTreeNode* m_pHeadNode;
private:
    CTreeNode*  CreateNode(int iValue);

    void Inorder(CTreeNode* pNode);    

    CTreeNode* GetMinNode(CTreeNode* pNode);
    CTreeNode* DeleteHelper(CTreeNode* pNode,int iValue);
public:
    CBST() ;

    bool InsetData(int iValue);

    bool DeleteNode(int iValue);

    void Print();

    ~CBST();
};




#endif //BST_H