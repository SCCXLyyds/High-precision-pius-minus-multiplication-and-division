// �߾���*�;��ȣ�
#include <iostream>
#include <vector>
using namespace std;
string x;vector<int>a;int b;
vector<int> mul(vector<int>&a,int &b)
{
    vector<int> c;
    int t=0;
    // for(int i=0;i<a.size() || t;i++){
    //     if(i<a.size())  t+=a[i]*b;
    //     c.push_back(t%10);
    //     t/=10;
    // }
    // ����ע�͵Ĵ����Ч�ڣ�
    for (int i = 0; i < a.size(); i ++) {
        t += a[i] * b;       // t + A[i] * b = 7218
        c.push_back(t % 10); // ֻȡ��λ 8
        t /= 10;             // 721 ���� ��λ
    }

    while (t) {            // �������ʣ��� t
        c.push_back(t % 10);
        t /= 10;
    }
    while(c.size()>1 && c.back()==0)  c.pop_back();
    return c;
}
int main()
{
    cin>>x>>b;
    for(int i=x.size()-1;i>=0;i--)  a.push_back(x[i]-'0');
    auto C=mul(a,b);
    for(int i=C.size()-1;i>=0;i--){
        cout<<C[i];
    }
    return 0;
}
