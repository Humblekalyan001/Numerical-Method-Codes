/************ Simpson 3/8 Method *******/
#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (1 / (x));
}
int main()
{
    float a,b, h;
    int n;
    cout<<"Enter the Lower Limit a = ";
    cin>>a;
    cout<<endl<<"Enter the Upper Limit b = ";
    cin>>b;
    cout<<endl<<"Enter the number of Sub intervals n = ";
    cin>>n;

    h = (b-a)/n;  // calculating h value//
    double x[n+1], y[n+1];
    for(int i=0;i<=n; i++)
    {
        x[i] = a + i*h;  // Calculating x0 to xn and y0 to yn //
        y[i] = f(x[i]);
    }
    //calculate sum//
    double sum = 0;
    for(int i=1; i<n; i++)
    {
        if(i % 3 == 0)
        {
            sum = sum + 2*y[i];
        }
        else
        {
            sum = sum + 3*y[i];
        }
    }
    double result = (((3*h)/8) * (y[0] + y[n] + sum));
    cout<<endl<<"Final Result is : "<<result;

    return 0;

}
