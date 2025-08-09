#include<iostream>
#include<fstream>
int main(){
    std::ofstream ofile;
    std::cout<<"Create file1"<<std::endl;
    ofile.open("test.txt");
    if(!ofile.fail()){
        ofile<<"name1"<<" ";
        ofile<<"sex1"<<" ";
        ofile<<"age1"<<" ";
        ofile.close();
        std::cout<<"Create file2"<<std::endl;
        ofile.open("test2.txt");
        if(!ofile.fail()){
            ofile<<"name2"<<" ";
            ofile<<"sex2"<<" ";
            ofile<<"age2";
            ofile.close();
        }
    }
    return 0;
}