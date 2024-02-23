#include<iostream>
int main()
{
    int n,i,f;
    std::cout<<"Enter value:";
    std::cin>>n;
    f=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
        }
    }
    if(f==0)
    {
        std::cout<<"no. is prime";
    }
    else{
        std::cout<<"no. is not prime";
    }
}