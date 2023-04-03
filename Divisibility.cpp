

#include <iostream>
#include <vector>

int main()
{
    std::string greeting{ "Hello there! Give me any number you wih to, and i'll try to find all the numbers that divide the given one." };
    std::cout << greeting<<std::endl;
    int us_input;
    std::vector<int> res;
    std::cin >> us_input;
    for (int i = 1; i <= us_input; i++)
    {
        if (us_input % i == 0) {
            res.push_back(i);
        }
    }
    for (int i:res)
    {
        std::cout << i << "\t";
    }
    std::cout << "I think theese are all of them. Goodbye!\n";

}

