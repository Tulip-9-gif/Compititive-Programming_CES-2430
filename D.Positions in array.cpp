#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<arr[i]<<endl;;
        }
    }
    return 0;
}
