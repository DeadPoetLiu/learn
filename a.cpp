#include <iostream>
#include <memory>
using namespace std;

void deleteInt(int * p){
   cout<<"now I delete "<<*p<<endl;
   delete p;

}

void f(){
   unique_ptr<int, decltype(deleteInt) *> x(new int(9), deleteInt);
    
    cout<<"_______"<<endl;
}


void weak(){
	auto p=make_shared<int>(34);
    weak_ptr<int> wp(p);
    p=nullptr;
    if(auto sp=wp.lock())
    {
    	cout<<*sp<<endl;
    }

}

int main(){
    weak();
}