#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int mult=1;
   int y[3] ={2,7,11};
   int x[4]={2,4,3,1};
   int *ptr=y;
   int* ptr1=x;
   for(int i=0; i<3; i++){
       sum+=y[i];
   }
   for(int j=0; j<4;j++){
       mult*=x[j];
   }
   cout<<"Sum of the first matrix:"<<sum<<endl;
   cout<<"Mult of the second matrix:"<<mult<<endl;
return 0;
}
