#include <iostream>
#include <algorithm>  

using namespace std;
int main()
{
    string s,a;
    s=a;
    cin>>s;
    next_permutation(s.begin(),s.end());
    if(s>a){
    cout<<s<<endl;}
    else cout<<0<<endl;
}
