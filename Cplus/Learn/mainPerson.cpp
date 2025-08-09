#include<iostream>
#include"Person.h"
int main(){
    CPerson p1(20,30,100);
    CPerson p2(p1);
    std::cout<<"m_iIndex of p1 is:"<<p2.getIndex()<<std::endl;
    std::cout<<"m_shAge of p1 is:"<<p2.getAge()<<std::endl;
    std::cout<<"m_iIndex of p1 is:"<<p2.getSalary()<<std::endl;
    std::cout<<"m_iIndex of p2 is:"<<p2.getIndex()<<std::endl;
    std::cout<<"m_shAge of p2 is:"<<p2.getAge()<<std::endl;
    std::cout<<"m_iIndex of p2 is:"<<p2.getSalary()<<std::endl;
}