

#include <iostream>
#include <vector>
#include <exception>

using namespace std;

void sieve(int x);


class ExceptionInvalidInput : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid number";
    }
};

int main()
{
    int x{0};
    cout<<"Enter number: \n";
    cin>>x;
    try{
        if(x < 0 || x > 100) throw ExceptionInvalidInput();
        sieve(x);
    }
    catch(ExceptionInvalidInput &e){
        cout<<e.what() <<endl;
    }
    return 0;
}

void sieve(int x){
    vector<bool> prime(x, true);
    cout<<"Initiated range from 2 to "<<x<<endl;
    for(int i=2; i*i<=x; i++){
        if(prime[i]==true){
            cout<<"Looking for multiples of "<<i<<endl;
            for (int j = i * i; j <= x; j += i){
                cout<<"Marking "<<j<<" as non-prime"<<endl;
                prime[j] = false; 
            }
        }
    }
    
    for(int i=2; i<=x; i++){
        if(prime[i]) cout<<i<<" ";
        else cout<<"x ";
        if(i%10==0) cout<<endl;

    }

    cout<<"Displaying prime numbers given range "<<x<<endl;
    
    for(int i=2; i<=x; i++){
        if(prime[i]) cout<<i<<" ";
    }
}
