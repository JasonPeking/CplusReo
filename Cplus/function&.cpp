#include<iostream>
const double Pi=3.1415926;
void Area(double radius,double &result){
    result=radius*radius*Pi;   
}
int main(){
    std::cout<<"Enter a radius: ";
    double radius=0;
    std::cin>>radius;
    double areaFeteched=0;
    Area(radius,areaFeteched);
    std::cout<<"Area is "<<areaFeteched<<std::endl;
    return 0;
}