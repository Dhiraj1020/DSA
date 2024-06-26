#include "BST.hpp"

CBST::CBST()
{
    m_pHeadNode = nullptr;
}

CBST::~CBST()
{
    if(m_pHeadNode != nullptr)
    {
        delete m_pHeadNode;
        m_pHeadNode = nullptr;
    }

}

CTreeNode*  CBST::CreateNode(int t_iValue)
{
    CTreeNode* pNode = nullptr;
    try
    {
        pNode = new CTreeNode(t_iValue);
    }
    catch(const std::exception& e)
    {
       return nullptr;
    }

    return pNode;
}

bool CBST::InsetData(int iValue)
{
    CTreeNode* pRun = m_pHeadNode;
    CTreeNode* pNewNode = nullptr;

    if(m_pHeadNode == nullptr)
    {
        m_pHeadNode = CreateNode(iValue);
        return true;
    }

    pNewNode = CreateNode(iValue);   

    while(1)
    {
        if(pRun->iValue >= iValue)
        {
            if(pRun->m_pLeftNode != nullptr)
                pRun = pRun->m_pLeftNode;
            else
                break;
        }
        else
        {
           if(pRun->m_pRightNode != nullptr)
                pRun = pRun->m_pRightNode;
            else
                break;
        }
    }

    if(pRun->iValue >= iValue)
        pRun->m_pLeftNode = pNewNode;
    else
        pRun->m_pRightNode = pNewNode;

    return true;
}

void CBST::Inorder(CTreeNode* pNode)
{
    if(pNode == nullptr)
        return;
    
    Inorder(pNode->m_pLeftNode);
    std::cout << pNode->iValue << " " ;
    Inorder(pNode->m_pRightNode);
}

void CBST::Print()
{
    std::cout << std::endl;
    Inorder(m_pHeadNode);
}

bool  CBST::DeleteNode(int iValue)
{
    DeleteHelper(m_pHeadNode,iValue);
    return true;
}

 CTreeNode* CBST::DeleteHelper(CTreeNode* pNode,int iValue)
 {
    if(pNode == nullptr)
        return nullptr;

    if(pNode->iValue > iValue)
        pNode->m_pLeftNode = DeleteHelper(pNode->m_pLeftNode,iValue);
    else  if(pNode->iValue < iValue)
        pNode->m_pRightNode = DeleteHelper(pNode->m_pRightNode,iValue);
    else
    {
        if(pNode->iValue == iValue)
        {
            if(pNode->m_pLeftNode == nullptr)
            {
                CTreeNode* temp = pNode->m_pRightNode;
                delete pNode;
                pNode = nullptr;
                return temp;
            }
            else if (pNode->m_pRightNode == nullptr)
            {
                CTreeNode* temp = pNode->m_pLeftNode;
                delete pNode;
                pNode = nullptr;
                return temp;
            }
            else
            {
                CTreeNode* pMinNode = GetMinNode(pNode->m_pRightNode);
                pNode->iValue = pMinNode->iValue;
                pNode->m_pRightNode =  DeleteHelper(pNode->m_pRightNode,pMinNode->iValue);
            }
        }
    }
    
    return pNode;
 }


 CTreeNode* CBST::GetMinNode(CTreeNode* pNode)
 {
    CTreeNode* pRun = pNode;
    while(pRun->m_pLeftNode != nullptr)
    {
        pRun = pRun->m_pLeftNode;
    }

    return pRun;
 }