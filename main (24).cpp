#include <iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
while(i<=n){
j=1;
while(j<=i){
char ch ='A'+i-1;
cout<< ch;
j++;
}
cout<< endl;
i++;
}
}