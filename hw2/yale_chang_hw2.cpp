// Author: Yale CHANG
// Platform: g++(2011) on Ubuntu 12.04 LTS

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &A );
void populateVecotr(vector<int> &A, double m);
void printVector(vector<int> A);

int main()
{
    cout<<"Hello World!"<<endl;
    int test_vector[] = {3,7,2,9,5,4};
    vector<int> myvector(test_vector,test_vector+sizeof(test_vector)/sizeof(int));
    insertionSort(myvector);
    for(vector<int>::iterator i=myvector.begin();i!=myvector.end();i++)
        cout<<*i<<",";
    cout<<endl;
}

// Implementation of Insertion Sort
void insertionSort(vector<int> &A)
{
    for(vector<int>::iterator j=A.begin()+1;j!=A.end();j++)
    {
        vector<int>::value_type key = *j;
        // Insert A[j] into the sorted sequence A[1..j-1].
        vector<int>::iterator i = j-1;
        while(i>=A.begin() && *i>key)
        {
            *(i+1) = *i;
            i--;
        }
        *(i+1) = key;
    }
}


