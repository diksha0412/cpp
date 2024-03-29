
#include<iostream>

int main() {
    
    int i,j,m,k;
   std:: cin>> m;
    std::cin>> k;
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=k;j++)
    {
      if(i==1 || i==m)             
      {                              
      std::cout<<"*";              
                                   
      }
      else{
 
        if(j==1||j==k)
        {
            std::cout<<"*";
        }
        else{
            std::cout<<" ";
            }
      }
        
    }
    std::cout << "\n";
    }

    return 0;
}


