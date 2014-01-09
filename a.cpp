#include <iostream>
#include <memory>
using namespace std;



int main(){
    
    int *lt=new int[5]{1,3};
       
for(int i=0;i<5;i++)
        cout<<lt[i]<<endl; 

    string * gs=new string[10]{"a","b","c",string(10,'o')};
for(int i=0;i<10;i++)
        cout<<gs[i]<<endl; 
 
 delete [] lt;

 delete [] gs;


}