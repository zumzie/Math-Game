#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "TwoRandomSum_Function.hpp"

using namespace std;


int main()
{
    greet();
    int num;
    int num2;
    int answer;
    int sum = 0;
    int misses = 0;
    bool guess = false;
    cout << display_misses;
    cout << "\n\n\n";

    cout << "\n\n";

    while (sum !=  answer && misses < 7){

        display_misses(misses);
        cout << "\n\n";
        num = number_generator(num);
        num2 = num_gen2(num2);
        cout << "\n\n" << num << " + " << num2 << " = \n";
        answer = user_answer(0);
        sum = num + num2;
        cout << "\n\nSum: " << sum;

        if (answer == sum){
            cout << "\nCorrect!\n";
            guess = true;
            cout << "\n\nAnswer: " << answer;
        } else {
            cout << "\nIncorrect! The tractor beam pulls the person in further. \n";
            misses++;
            cout << "\n\nAnswer: " << answer;
        }
        guess = false;

    }


    end_game(sum, answer);


}
