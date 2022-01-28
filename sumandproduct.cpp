#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"first integer:  "<<endl;
    cin>>n;
    cout<<"second integer:  "<<endl;
    cin>>m;
    cout<<"If first integer is '2' than u will get answer in multiplication"<<endl;
    int sum=0;
    int multi=1;
    for(int i=n;i<=m;i++){
        if(n==2){
       multi=multi*i;
        }else{
       sum=sum+i;
        }
    }
     cout<<"final answer is:  \n"<<endl;
    if(sum!=0){
        cout<<sum;
    }else{
        cout<<multi;
    }
   return 0;
}