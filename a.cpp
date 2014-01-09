#include <iostream>
#include <memory>
using namespace std;



int main(){
    

    int *t=new int[10]{1,2,3};
    unique_ptr<int[]> up(t);

      for(int i=0;i<10;i++){

    	 up[i]=i;
    }
    
    for(int i=0;i<10;i++){

    	cout<<t[i]<<endl;
    }
    auto pp=up.release();
    if(pp==t)
    	cout<<"it is true"<<endl;
  //  delete [] t;
     
     up=nullptr;

    for(int i=0;i<10;i++){

    	cout<<t[i]<<endl;
    }
    


}