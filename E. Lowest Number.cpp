#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int low=arr[1];
    int pos=1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<low)
        {
          low=arr[i];
          pos=i;
        }
    }
    cout<<low<<" "<<pos<<endl;
    return 0;
}
