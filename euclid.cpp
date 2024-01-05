#include <iostream>
#include <string>  
using namespace std;

class ExceptionInvalidInput : public std::exception {
private:
    int y;

public:
    ExceptionInvalidInput(int value) : y(value) {}

    const char* what() const noexcept override {
        std::string message = "Number nonpositive or zero: " + std::to_string(y);
        return message.c_str();
    }
};

int gcd(int x, int y);

int main()
{
    int m,n,result;
    cout<<"Enter two non-positive integers\n";
    try{
        cin>>m>>n;
        if(m<0 || m == 0) throw ExceptionInvalidInput(m);
        if(n<0 || n == 0) throw ExceptionInvalidInput(m);
    }
    catch(ExceptionInvalidInput &e){
        cout<<e.what()<<endl;
    }
    cout<<"Calculating GCD of "<<m<<" and "<<n<<" step by step: \n";
    result=gcd(m,n);
    cout<<"The GCD of "<<m<<" and "<<n<<" is "<<result<<endl;

    return 0;
}
int gcd(int x, int y){
    if(y==0) return x;
    int r = x % y;
    cout<<x<<" = "<<y<<" * "<<x/y<<" + "<<x%y<<endl; 
    return gcd(y,r);
}
