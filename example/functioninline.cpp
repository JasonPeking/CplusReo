#include<iostream>
inline dooubleNums(double number){
    return number*2;
}
int main(){
    std::cout<<"Enter a doubletype num: ";
    double num=0;
    std::cin>>num;
    std::cout<<"doubletype is "<<dooubleNums(num)<<std::endl;
    return 0;
}