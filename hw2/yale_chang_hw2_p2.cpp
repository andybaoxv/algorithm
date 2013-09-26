// Author: Yale CHANG
// Complier: g++ (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3
// Platform: Ubuntu Release 12.04 (precise) 32-bit
//           Kernel Linux 3.2.0-53-generic-pae

#include<iostream>
using namespace std;

// Original function
int misterya(int n)
{
    int S = 0;
    for(int i=1; i<n+1; i++)
        S += i*i;
    return S;
}

// Function after optimization
int misterya_opt(int n)
{
    return n*(n+1)*(2*n+1)/6;
}

int main()
{
    int n = 100;
    // Apply misterya directly
    int S_1 = misterya(n);

    // Apply optimized misterya
    int S_2 = misterya_opt(n);
    
    cout<<"n = "<<n<<endl; 
    cout<<"S_1(original misterya) = "<<S_1<<endl;
    cout<<"S_2(optimized misterya) = "<<S_2<<endl;
}
