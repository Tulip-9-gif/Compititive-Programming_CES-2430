#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    long long int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int X;
    cin>>X;
    int position=-1;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==X){
            position=i;
            break;
        }
    }
    cout<<position<<endl;
    return 0;
}
