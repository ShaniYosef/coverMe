#include <iostream>
#include "Array.h"
using namespace std;
int main() {

    try{
        Array<int> arr;
        for(int i=0;i<N;i++)
            arr[i]=i+1;

        ++arr;

        cout<<*(++arr)<<endl;

        cout<<*(arr+1) << endl;
        cout<<*(arr+1) << endl;
    }
   catch (int i)
   {
       cout << "INDEX OUT OF BOUND "<< i << endl;

   }

    return 0;
}