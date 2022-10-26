#include <iostream>
using namespace std;
int main(){

int t;
cin>>t;
int n, i, j, count, temp, ans, ans2;

while(t--){
	cin>>n;
	int arr[n];
	ans = 1;
	ans2=0;

	for(i=0; i<n; i++){
		cin>>arr[i];
	}
   temp = 10 - n;


   if(temp == 2){
	cout<<"6"<<endl;
   } else{
      for(i=1; i<temp; i++){
        ans = i*6;
        ans2 +=ans;
      }
       cout<<ans2<<endl;
   }



}






}

