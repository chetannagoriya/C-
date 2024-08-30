#include <iostream>
using namespace std;
int main() {
    int i,j, arr[3][3],brr[3][3],sum[3][3];
    //;matrix A input
    cout<<"Enter marrix A"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {   
        
        cout<<"Enter the element "<< i<< j<<"=";
        cin>>arr[i][j];
    }
    }
    //matrix B input
    cout<<"Enter marrix B"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {   
        
        cout<<"Enter the element "<< i<< j<<"=";
        cin>>brr[i][j];
    }}
    // addition of both matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {   
       sum[i][j]= arr[i][j]*brr[i][j];
        
    }}
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {   
       cout<<" "<<sum[i][j];
        
    }
        cout<<endl;
    }
    
    return 0;
}
