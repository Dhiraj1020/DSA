#include<iostream>
using namespace std;

#define SUCCESS_T 1
#define FAIL_T 0

typedef int STATUS_T;

using STATUS_T=int;
using data_t=int;

class CNode
{
    friend class CList;
    public:
    data_t m_iData;
    class CNode* m_pNextNode;
    private:
    CNode(data_t new_data) : m_iData(new_data)
    {
    }
};

class CList
{
    private:
    CNode* m_pHeadNode;

    CNode* GetNewNode(data_t new_data);

    void Generic_insert(CNode* p_beg, CNode* p_mid, CNode* p_end);
    void Generic_delete(CNode* p_beg, CNode* p_mid, CNode* p_end);
    CNode* SearchNode(data_t data);
    void SearchAndGetPrev(CNode* pCurNode, CNode* pPrevNode, data_t data);
    


    public:
    CList();
    ~CList();

    STATUS_T insert_start(data_t new_data);
    STATUS_T insert_end(data_t new_data);
    STATUS_T Remove_start();
    STATUS_T Remove_end();
    STATUS_T Remove_Data(data_t data);
    void DestroyList();

    //How do you reverse a singly linked list?
    void ReverseList();

    //How do you find the middle node of a singly linked list?
    CNode* GetMiddleNode();

    friend ostream& operator << (ostream &out, const CList &c);

};

