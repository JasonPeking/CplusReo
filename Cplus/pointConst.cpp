/*
const 在*号右边，指针存储的地址是常量，不可以修改
const 在*号左边，指针指向的数据是常量，不可以修改
const 在*号左边和右边都有，指针指向的数据是常量和指针指向的地址也是常量
*/
#include<iostream>
void CalcArea(const double* const ptrPi,const double* const ptrRadius,double* const ptrArea){
    if(ptrPi&&ptrRadius&&ptrArea){
        *ptrArea=(*ptrPi)*(*ptrRadius)*(*ptrRadius);
    }
}
int main(){
    const double Pi=3.1415926;
    std::cout<<"Enter radius of circle: ";
    double radius=0;
    std::cin>>radius;
    double area=0;
    CalcArea(&Pi,&radius,&area);
    std::cout<<"Area is = "<<area<<std::endl;
    return 0;
}