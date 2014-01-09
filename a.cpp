#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> x(new int(9));
    
    cout<<*x<<endl;
}