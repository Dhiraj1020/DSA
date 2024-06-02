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

    public:
    CList();
    ~CList();

    STATUS_T insert_start(data_t new_data);
    STATUS_T insert_end(data_t new_data);
    void DestroyList();

    friend ostream& operator << (ostream &out, const CList &c);

};

