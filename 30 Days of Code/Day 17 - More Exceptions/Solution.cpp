#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator {
    public:
        int power(int, int);
};

int Calculator::power(int n, int p) {
    if (n < 0 || p < 0) {
        throw range_error("n and p should be non-negative");
    }
    else {
        return pow(n, p);
    }
}

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}