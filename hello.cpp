#include <bits/stdc++.h>
using namespace std;


int fun(int n){
if(n==4)
    return 2;
else
    return 2*fun(n+1);



   }

int main(){



cout<< fun(2);


return 0;
}
