#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int count=0,flag=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {flag=1;break;}
            
        }

        if(flag==0)
        count++;

    }
    cout<<count;
}