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

int main(){
    f();
}