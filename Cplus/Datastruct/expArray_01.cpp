#include<iostream>
struct Stud{
    int no;
    std::string name;
    Stud(int n,std::string na):no(n),name(na){
    }
};
struct Cmp{
    bool operator(const Stud&s,const Stud&t)const{
        return s.name>t.name;0
    }
};
int main(){
    Stud a[]={Stud(3,"Mary"),Stud(1,"Smith"),Stud(2,"John")};
    int n=sizeof(a)/sizeof(a[0]);
    std::vector<Stud>v(a,a+n);
    std::sort(v.begin(),v.end(),Cmp());
    for(auto it=v.begin();it!=v.end();it++){
        std::cout<<"["<<it->no<<","<<it->name<<"]";
        return 0;
    }
}