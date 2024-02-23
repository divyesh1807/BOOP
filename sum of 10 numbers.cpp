#include <iostream>
int main()
{
    int n[10],sum = 0,i,j,c;
    double average; 
    for ( i = 0; i < 10; i++) 
    {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> n[i];
        sum += n[i];
    }
    average =sum / 10;
    for (i = 0; i < 10 - 1; i++) 
    {
        for ( j = 0; j < 10 - i - 1; j++) 
        {
            if (n[j] > n[j + 1]) 
            {
                
                c = n[j];
                n[j] = n[j + 1];
                n[j + 1] = c;
            }
        }
    }
    std::cout << "Sum: " << sum<<"\n";
    std::cout << "Average: " << average<<"\n";
    std::cout << "Sorted array in ascending order:";
    for (int i = 0; i < 10; i++) 
    {
        std::cout << n[i] << " ";
    }
    std::cout <<"\n";
}