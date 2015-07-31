/*
    Filename: counter.cpp
    Problem: Problem number 5 in chapter 10
    Description: Define a class for a type called CounterType, An object of
        this type is used to count things, so it records a count that is a
        nonnegative whole number. Include a default constructor that sets the
        counter to zero and a constructor with one argument that sets the
        counter to the value specified bu its argument. Include member
        functions to increase the count by 1 and to decrease the counter by 1.
        Be sure that no member function allow the value of the counter to
        become negative. Also, include a member function that returns the
        current count value and the one that outputs the count to a stream.
        The member function for doing output will have one formal parameter of
        type ostream for the output stream that receives the output.
*/
#include <iostream>
using namespace std;

class CounterType
{
public:
    void increment();
    void decrement();
    void set(int setCounter);
    int  totalCount();
    void output();
private:
    int counter;
};

int main()
{
    CounterType recorder;
    int count;
    int num;
    
    recorder.set(count);
    
    do
    {
        cout << "Enter number (press 0 to exit) => ";
        cin >> num;
        
        if (num < 0)
            recorder.increment();
        else if (num > 0)
            recorder.decrement();

    }while (num != 0);
    
    recorder.output();
    
    return 0;
}
void CounterType::increment()
{
    counter++;
}

void CounterType::decrement()
{
    if (counter > 0)
        counter--;
}
void CounterType::set(int setCounter)
{
    setCounter = 0;
    counter = setCounter;
}
int CounterType::totalCount()
{
    return counter;
}
void CounterType::output()
{
    cout << "Total " << totalCount() << " number(s) are negative" << endl;
}
