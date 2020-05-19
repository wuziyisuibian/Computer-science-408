#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int ElemType;

class SqList
{
public:
    SqList(int init_size);
    ~SqList();

    int Length();
    int Capacity();

    bool Insert(int i, ElemType e);
    bool Ddelete(int i, ElemType &e);
    int LocateElem(ElemType e);

private:
    ElemType *m_data;
    int m_length;
    int m_max_size;
};

SqList::SqList(int init_size)
: m_max_size(init_size)
, m_length(0)
{
//	m_data=(ElemType*)malloc(sizeof(ElemType)*m_max_size);
    m_data = new ElemType(m_max_size);
}

SqList::~SqList()
{
//	free(m_data);
    delete m_data;
}

int SqList::Length(){
    return m_length;
}

int SqList::Capacity(){
    return m_max_size;
}

bool SqList::Insert(int i, ElemType e)
{
    if(i<1 || i>m_length+1){
        return false;
    }
    if(m_length=m_max_size){
        return false;
    }
    for(int j=m_length; j>=i; j--){
        m_data[j]=m_data[j-1];
    }
    m_data[i-1]=e;
    m_length++;
    return true;
}

bool SqList::Ddelete(int i, ElemType &e)
{
    if(i<1 || i>m_length){
        return false;
    }
    if(m_length=0){
        return false;
    }
    e=m_data[i-1];
    for(int j=i-1; j<=m_length-2; j++){
        m_data[j]=m_data[j+1];
    }
    m_length--;
    return true;
}

int SqList::LocateElem(ElemType e)
{
    for(int i=0; i<m_length; i++){
        if(m_data[i]==e){
            return i;
        }
    }
    return -1;
}



int main(void)
{
    cout << "hello world!";
    SqList s(50);
    return 0;
}
