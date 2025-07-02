#include<iostream>
void DisplayArray(int nums[],int length){
    for(int index=0;index<length;++index){
        std::cout<<nums[index]<<" ";
    }
    std::cout<<std::endl;
}
void DisplayCharArray(char charnums[],int length){
    for(int index=0;index<length;++index){
        std::cout<<charnums[index]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int Arraynums[4]={1,2,3,4};
    char Arraycharnums[6]={'h','e','l','l','o','\0'};
    DisplayArray(Arraynums,4);
    DisplayCharArray(Arraycharnums,6);
    return 0;
}