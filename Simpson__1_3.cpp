#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x / (1 + x));
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

    double odd_sum = 0;
    for(int i=1; i<n; i=i+2)   // odd places sum value //
    {
        odd_sum = odd_sum + 4*y[i];
    }
    double even_sum = 0;
    for (int i = 2; i < n; i=i+2)
    {
        even_sum = even_sum + 2*y[i];
    }
    //sum1 = sum1 + sum2;
    double result = (h/3) * (y[0] + y[n] + odd_sum + even_sum); // final formula//
    cout<<endl<<"Final Result is : "<<result;

    return 0;

}
