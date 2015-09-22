#include <iostream>

using namespace std;

class App {
    
public:
    App(int value);
    ~App();
    
    void Start();
    
private:
    int value_; 
};

App::App(int value = 5)
{
    value_ = value;
    cout << value_;
}

App::~App() 
{
}

int main()
{
   App app = App(100);
   
   return 0;
}





