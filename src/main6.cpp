#include <future>
#include <iostream>
#include <chrono>

int find_the_answer_to_ltuae()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    return 42;
}

void do_other_stuff()
{}

int main()
{
    std::future<int> the_answer=std::async(find_the_answer_to_ltuae);
    do_other_stuff();
    std::cout<<"The answer is "<<the_answer.get()<<std::endl;
}
