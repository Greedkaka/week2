#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

std::string Ans(){
    std::string ans;
    srand((unsigned int)time(NULL));
    
    for(int i=0; i<3; i++)
        ans+=std::to_string(rand()%10);
    return ans;
}
std::string Scan(){
    std::string ans;
    std::cin>>ans;
    return ans;
}