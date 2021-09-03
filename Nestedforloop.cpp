#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int NumGrid [3][2]= {
                        {2,3},
                        {4,6},
                        {5,7}
    };
   for(int i=0;i<3;i++){
      for(int j=0;j<2;j++){
            cout << NumGrid [i]  [j] ;
       
       }
       cout << endl;
   }
 

    return 0;
}