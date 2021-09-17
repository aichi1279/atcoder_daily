/*
トキはモンスターと戦っています。
モンスターの体力はHです。
トキはN種類の魔法が使え、i番目の魔法を使うと、モンスターの体力をAi減らすことができますが、トキの魔法をBi消耗します。

同じ魔法は何度でも使うことができます。
魔法以外の方法でモンスターの体力を減らすことはできません。
モンスターの体力を0以下にすればトキの勝ちです。
トキがモンスターに勝つまで消耗する魔力の合計の最小値を求めてください。
*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int H,N,*A,*B,a,b;

  cin>>H>>N;

  
  for(int i=0;i<N;i++){
    *(A+i)=0;
    *(B+i)=0;
  }
  for(int i=0;i<N;i++){
    cin>>a>>b;
    *(A+i)=a;
    *(B+i)=b;
  }
  double max=0,max_A=0,max_B=0;
  
   for(int i=0;i<N;i++){
     if(max<*(A+i)/ *(B+i)){
       max_A=*(A+i);
       max_B=*(B+i);
     }
   }

   int count=(H/max_A)+1;

   cout<<max_B*count<<endl;
   return 0;
}
