#include <bits/stdc++.h>
using namespace std;

void Binary_Search()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int item;
    cin>>item;

    int left = 0, right = n-1;
    while(left<=right)
    {
        int mid = left+right/2;
         if(v[mid]==item)
        {
            cout<<"Data found in idex "<<mid<<"\n";
            break;
        }

        else if(v[mid]<item)
        {
            left = mid+1;
        }

        else if(v[mid]>item)
        {
            right = mid-1;
        }

    }


}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Binary_Search();
    }
    return 0;
}
