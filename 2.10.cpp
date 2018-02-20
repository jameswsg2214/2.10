// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a,i,c,temp=1;
    int calc()
    {
        
        for(i=1;i<=5;i++)
        {
        c=a*i;
        cout<<c<<" ";
        }
        
        return 0;
    }
};
int main()
{
  sample s;
  cin>>s.a;
  s.calc();
}
