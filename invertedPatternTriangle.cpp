#include<iostrean>

int main() {
    // Write C++ code here
    int i,j,m,k;
   std:: cin>> m;
    //std::cin>> k;
    
    for(i=1;i<=m;i++)
    {                                   // ****                          *
        for(j=1;j<=m-i+1;j++)           // ***                           **
      {                                 // **                            ***          i = j;
      std::cout<<"*";                   // *                             ****
      }
    
     std::cout << "\n";
    }

    return 0;
}