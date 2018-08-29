#include <iostream>
using namespace std;

int main()

{
 int no , i;
 bool flag = true;

 cout <<"Enter the number:";
 cin>> no;

 for( i=2; i <no-1; i++)
 {
 if (no%i ==0)

{ 
flag = false;
break;

}

}

if (flag)
cout <<" prime number";

else 
  
  cout <<" This is not a prime number";

return 0;
}
