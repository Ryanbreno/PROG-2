#include <iostream>
using namespace std;

int main(){
    int *ptr = new int(42);
    delete ptr;
    

    std::unique_ptr<int> ptr = std::make_unique<int>(42);


}