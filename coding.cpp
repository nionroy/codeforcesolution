#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int n,rem,s=0,num;
    cin>>n;
    num=n;
    while(num>0)
    {
        rem=num%10;
        s=s*10+rem;
        num=num/10;
    }
    cout<<s<<endl;



    return 0;
}
