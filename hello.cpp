#include <iostream>
#include <thread>

void hello(int i)
{
    std::cout << "Hello Concurrent World!   " << i+1 << std::endl;
}

int main()
{
    int i = 0;
    std::thread t(hello, i);
    std::thread tt(hello, i);
    
    t.join();
    tt.join();
}
