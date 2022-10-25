#include <iostream>

int global_a=0;
int main() {
    int sum=0;
    for (int i = 0; i < 10; ++i) {
        sum+=i;
        global_a+=i;
    }
    std::cout<<"sum= "<<sum<<std::endl;
    std::cout<<"global_a= "<<global_a<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}