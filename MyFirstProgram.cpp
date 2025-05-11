#include <iostream>
int main(){
    std::cout<<"Hello, what is your name?\n";
    std::string userName;
    std::getline(std::cin,userName);
    std::cout<<"Hello "<<userName<<", right now how old are you?\n";
    int userAge;
    std::cin>>userAge;
    std::cout<<"Did your birthday this year came? Answer with y/n\n";
    int userAge_thisYear = userAge;
    std::string sinh_nhat_den_chua;
    std::cin>>sinh_nhat_den_chua;
    if (sinh_nhat_den_chua == "n") {
       userAge_thisYear ++;
       std::cout<<"This year you will be "<<userAge_thisYear<<" years old.\n";
       system("pause");
    }
    else {
        std::cout<<"This year you are "<<userAge_thisYear<<" years old\n";
        system("pause");
    }
    return 0;
}
