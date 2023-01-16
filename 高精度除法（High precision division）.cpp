#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>a;int r=0,b;
string x;
vector<int> div(vector<int>&a,int b,int &r){
    vector<int> c;
    for(int i=0;i<a.size();i++){
        r=r*10+a[i];
        c.push_back(r/b);
        r%=b;
        }
        reverse(c.begin(),c.end());
        while(c.size()>1 && c.back()==0)  c.pop_back();
        return c;
}
int main(){
    cin>>x>>b;
    for(int i=x.size()-1;i>=0;i--){
        a.push_back(x[i]-'0');
    }
    auto c=div(a,b,r);
    for(int i=c.size()-1;i>=0;i--){
        cout<<c[i];
    }
    cout<<r<<endl;
    return 0;
}
