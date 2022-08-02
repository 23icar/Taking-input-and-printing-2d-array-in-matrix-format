#include<iostream>
using namespace std;
int main()
{
    int arr2d[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter the value you want at the "<<i<<" & "<<j<<" positions"<<endl;
            cin>>arr2d[i][j];
        }
        
    }
    cout<<"Lets see how our 2D array looks in matrix format"<<endl;
        cout<<"{"<<"{"<<arr2d[0][0]<<","<<arr2d[0][1]<<","<<arr2d[0][2]<<"}"<<","<<endl
                 <<"{"<<arr2d[1][0]<<","<<arr2d[1][1]<<","<<arr2d[1][2]<<"}"<<","<<endl
                 <<"{"<<arr2d[2][0]<<","<<arr2d[2][1]<<","<<arr2d[2][2]<<"}"<<"}"<<endl;
                                     
    return 0;
}