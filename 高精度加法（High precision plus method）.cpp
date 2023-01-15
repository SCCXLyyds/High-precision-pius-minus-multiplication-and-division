#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int>a,b;
vector<int> add(vector<int>&A,vector<int>&B)
{
    if(A.size()<B.size()) return add(B,A);
    vector<int>c;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t+=A[i];
        if(i<B.size()) t+=B[i];
        c.push_back(t%10);
        t/=10;
    }
    if(t) c.push_back(t);
    return c;   
}

int main()
{
    string x,y;
    cin>>x>>y;
    // for(int i=x.size()-1,int j=y.size()-1;i>=0,j>=0;i--,j--){
    //     a.push_back(x[i]-'0');
    //     b.push_back(y[j]-'0');
    // }
    for (int i = x.size() - 1; i >= 0; i -- ) a.push_back(x[i] - '0');
    for (int j = y.size() - 1; j >= 0; j -- ) b.push_back(y[j] - '0');
    auto D=add(a,b);
    for(int i=D.size()-1;i>=0;i--){
        printf("%d",D[i]);
    }
    
    
    return 0;
}
