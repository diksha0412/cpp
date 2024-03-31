#include<iostream>

#include<iostream>
int main(){

int i,j,n;
std::cin>>n;
for(i=0;i<=(n-1)/2;i++){
for(j=0;j<=n-1;j++){
if(j==n/2-i || j==n/2+i ||i==(n-1)/2){
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
