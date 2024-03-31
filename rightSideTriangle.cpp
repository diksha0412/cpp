#include<iostream>

#include<iostream>
int main(){

int i,j,n;
std::cin>>n;
for(i=0;i<=(n-1);i++){
for(j=(n-1)/2;j>=0;j--){
if(i>=n/2-j && i<=n/2+j){
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
