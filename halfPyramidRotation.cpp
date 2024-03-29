#include<iostream>
int main(){

int i,j,n;
cin>>n;
for(i=1;i<=n,i++){
for(j=1;j<=n,j++){
if(j<=n-i){
std::cout<<" ";
}

}
else{
std::cout<<"*";

}
std::cout<<"\n";
} 
return 0;}
