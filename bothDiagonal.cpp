#include<iostream>

#include<iostream>
int main(){

int i,j,n;
std::cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i==1 || i==n || j==1 || j==n || i+j ==n+1 || i==j){
std::cout<<"*" ;
}
else{
    std::cout<<" ";
}
}


std::cout<<"\n";
} 
return 0;
}
