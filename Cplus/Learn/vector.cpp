#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector<int> intArray;
    intArray.push_back(50);
    intArray.push_back(2991);
    intArray.push_back(23);
    intArray.push_back(9999);
    std::cout<<"The contents of the vector are: "<<std::endl;
    std::vector<int>::iterator arrIterator=intArray.begin();
    while(arrIterator !=intArray.end()){
        std::cout<<*arrIterator<<std::endl;
        ++arrIterator;
    }
    std::vector<int>::iterator elFound=find(intArray.begin(),intArray.end(),2991);
    if(elFound!=intArray.end()){
        int elPos=distance(intArray.begin(),elFound);
        std::cout<<"Value "<<*elFound;
        std::cout<<" found in the vector at position: "<<elPos<<std::endl;
    }
    return 0;
}