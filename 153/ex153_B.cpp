/*
アライグマはモンスターと戦っています。
モンスターの体力はHです。
アライグマはN種類の必殺技を使うことができ、i番目の必殺技を使うとモンスターの体力をAi減らすことができます。
必殺技を使う以外の方法でモンスターの体力を減らすことはできません。
モンスターの体力を0以下にすれば、アライグマの勝ちです。

アライグマが同じ必殺技を2度以上使うことなくモンスターに勝つことができるなら、”YES”を、できないなら”NO”を出力してください。
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int H,N,*A,sum=0;

  cin>>H>>N;

  for(int i=0;i<N;i++){
    *(A+i)=0;
  }
  
  for(int i=0;i<N;i++){
    cin>>*(A+i);
    sum += *(A+i);
  }

  if(sum >= H){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
  
