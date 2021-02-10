#include<iostream>
#include<cmath>
using namespace std;
double f(double x)                          //write the function whose definite integral is to be calcuated here
{
    double a= x*x + 2*x;
    return a;
}
int main()
{
    int n,i;                                //n is for subintervals and i is for loop
    double a,b,h,sum=0,result=0;   
    cout<<"Enter the lower limit ,a=";    //get the limits of integration
    cin>>a;
    cout<<"Enter the upper limit, b=";
    cin>>b;
    cout<<"Enter the no. of subintervals, n=";            //get the no. of subintervals
    cin>>n;    
    double x[n+1],y[n+1];    
    h=(b-a)/n;                              //get the width of the subintervals
    for (i=0;i<=n;i++)            
    {                                       //loop to evaluate x0,...xn and y0,...yn
        x[i]=a+i*h;                         //and store them in arrays
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i++)                       //loop to evaluate h*(y1+...+yn-1)
    {
        sum=sum+h*y[i];
    }
    result=h/2.0*(y[0]+y[n])+sum;        // h/2*[y0+yn+2(y1+y2+y3+...yn-1)]
    cout<<"The definite integral  is "<<result<<endl;
    return 0;
}




