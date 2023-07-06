#include<bits/stdc++.h>
using namespace std;

int main (){

int n,capcity=0,currentpass=0;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    currentpass-=a;
    currentpass+=b;
    capcity=max(capcity,currentpass);

}
cout<<capcity<<endl;

return 0;
}

