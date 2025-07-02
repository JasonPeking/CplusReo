#include<iostream>
const double Pi=3.1415926;
auto Area(double radius){
    return radius*radius*Pi;
}
int main(){
    std::cout<<"Enter a number: ";
    double radiusNumber=0;
    std::cin>>radiusNumber;
    std::cout<<"area is "<<Area(radiusNumber)<<std::endl;
    return 0;
}