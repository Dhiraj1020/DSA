#include "SLL.hpp"

CList::CList()
{
    m_pHeadNode = new CNode(-1);
    if(m_pHeadNode == nullptr)
        throw std::bad_alloc();
    m_pHeadNode->m_pNextNode = nullptr;
}

CList::~CList()
{
   DestroyList();
}

CNode* CList::GetNewNode(data_t new_data)
{
    CNode* p_CNode = nullptr;

    p_CNode = new CNode(new_data);

    return p_CNode;
}

STATUS_T CList::insert_start(data_t new_data)
{
    CNode* p_CNode = nullptr;

    p_CNode = GetNewNode(new_data);

    if(p_CNode == nullptr)
        return FAIL_T;

    Generic_insert(m_pHeadNode,p_CNode,m_pHeadNode->m_pNextNode);
    return SUCCESS_T;

}

STATUS_T CList::insert_end(data_t new_data)
{
    CNode* p_CNode = nullptr;
    CNode* p_run = nullptr;
    p_CNode = GetNewNode(new_data);

    if(p_CNode == nullptr)
        return FAIL_T;

    p_run = m_pHeadNode;       
    while (p_run->m_pNextNode != nullptr)
    {
        p_run = p_run->m_pNextNode;
    }

    Generic_insert(p_run,p_CNode,p_run->m_pNextNode);
    return SUCCESS_T;

    
}

void CList::Generic_insert(CNode* p_beg, CNode* p_mid, CNode* p_end)
{
    p_beg->m_pNextNode = p_mid;
    p_mid->m_pNextNode = p_end;
}

void CList::DestroyList()
{
    CNode* pRun = m_pHeadNode;
    CNode* pTemp = nullptr;

    while (pRun != nullptr)
    {
        pTemp = pRun;
        pRun = pRun->m_pNextNode;
        delete pTemp;
        pTemp = nullptr;
    }
}

ostream& operator<< (ostream &out, const CList &c)
{  
    CNode* p_run = nullptr;
    p_run = c.m_pHeadNode->m_pNextNode;     
     out << "SLL : [ ";  
    while (p_run != nullptr)
    {
        out << p_run->m_iData << "-"; 
        p_run = p_run->m_pNextNode;
    }
    
    out << " ] ";  
    
    return out;
}