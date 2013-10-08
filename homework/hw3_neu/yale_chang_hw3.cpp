// Author: Yale CHANG
// Compiler: g++ (GCC) 4.8.1 20130603 (Red Hat 4.8.1-1)
// Platform: Fedora 19 32-bit
//           kernel-3.11.1-200.fc19.i686
#include<iostream>
using namespace std;

// Find the largest element from an array using divide and conquer
int find_maximum_dc(int A[],int l,int r);

int main()
{
    int A[7] = {9,12,3,4,7,19,32};
    cout<<find_maximum_dc(A,0,6)<<endl;
    //cout<<A[4]<<endl;
}

int find_maximum_dc(int A[],int l,int r)
{
    //Obtain size of the vector
    if(l == r)
        return A[l];
    else
    {
        int middle = (l+r)/2;
        int left = find_maximum_dc(A,l,middle);
        int right = find_maximum_dc(A,middle+1,r);
        return left>right?left:right;
    }
}
