#include <iostream>
int main()
{
    int c=1,j,i,k;
    for (i=1;i<=4;i++) 
    {
        for(k=1;k<=5-i;k++)
        {
            std::cout<<" ";
        }
        for (j=1;j<=i;j++) 
        {
            std::cout<<c<<" ";
            c++;
        }
        std::cout<<"\n";
    }
}