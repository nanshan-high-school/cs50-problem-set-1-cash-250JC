#include <iostream>
using namespace std;
int main() {
  int answer;
  cout<<"輸入錢數\n";
  cin>>answer;
  if(answer>=50) {
    cout<<"需要"<<answer/50<<"個50元\n";
  }
  
  int a=answer%50;
  if (a>=10){
    cout<<"需要"<<a/10<<"個10元\n";
  }
  
  int b=a%10;
  if (b>=5){
    cout<<"需要"<<b/5<<"個5元\n";
  }
  
  
  int c=b%5;
  if (c>=1){
    cout<<"需要"<<c<<"個1元\n";
  }   
  cout<<"最少"<<answer/50+a/10+b/5+c<<"個硬幣";  
}
