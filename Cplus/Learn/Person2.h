#include<iostream>
#include<string.h>
class CPerson{
public:
    CPerson();
    ~CPerson();
    char* m_pMessage();
    void ShowStartMessage();
    void ShowFrameMessage();
};
CPerson::CPerson(){
    m_pMessage=new char[2048];
}
void CPerson::ShowStartMessage(){
    strcpy(m_pMessage,"Welcome to MR");
    std::cout<<m_pMessage<<std::endl;
}
void CPerson::ShowFrameMessage(){
    strcpy(m_pMessage,"**************");
    std::cout<<m_pMessage<<std::endl;
}
CPerson::~CPerson(){
    delete[] m_pMessage;
}
