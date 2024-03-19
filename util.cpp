#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

std::string Ans(){
    std::string ans;
    srand((unsigned int)time(NULL));
    int ran;
    
    for(int i=0; i<3; i++){
        ran=rand()%10;
        
        for(int j=0; j<ans.length(); j++){
            if(ans[j]==ran+'0'){
                ran=rand()%10;
                j=-1;
            }
        }
        ans+=std::to_string(ran);
    }
    return ans;
}
std::string Scan(){
    std::string ans;
    std::cin>>ans;
    return ans;
}