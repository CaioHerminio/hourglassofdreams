// ⏳ The Hourglass of Dreams - C++ Version

#include <iostream>
#include <string>
#include <cmath>  // for rounding if needed
#include <iomanip> // for setting precision

int main() {
    std::cout << "...the dream starts...\n\n";
    std::cout << "You have come to see the Hourglass of Dreams seeking wisdom on how to achieve mastery of a skill.\n\n";

    // Input goal
    std::string dream;
    std::cout << "The Hourglass asks you: 'What skill do you want to master?'\nYou: I want to master the skill of: ";
    std::getline(std::cin, dream);

    // Input hours per day and days per week
    int days, hours;
    std::cout << "The living sands ask you for a number: 'How many days per week will you work on this dream?'\nYou: ";
    std::cin >> days;

    std::cout << "The final question from the arcane device: 'How many hours per day will you dedicate to it?'\nYou: ";
    std::cin >> hours;

    /*
    This was based on a TedTalk by Josh Kaufman, who said that it takes 20 hours to learn a new skill and become average at it.
    I also noticed that most courses on 3D softwares, game development and programming also have a duration of 20-30 hours.
    Because of that, I decided to use 25 hours as a base for this calculation. 
    Wanna learn something new and get good enough at it? 25 hours is a good number to start with.
    Wanna become pro? 50-100 hours is a good reference.
    Wanna be the best in the world, the ultimate master? Then you use the famous 10,000 hours rule.
    But don't forget that you DON'T NEED 10 thousand hours to be happy with your skill and find a job with it.
    */ 

    int weekly_hours = days * hours;
    double total_weeks = 25.0 / weekly_hours;
    double total_days = total_weeks * 7.0;
    double total_months = total_weeks / 4.345; // Average weeks per month

    // Output results
    std::cout << "\nThe Hourglass of Dreams has calculated your goal through the magic of invisible numbers and intangible seconds. Now you will receive the answer you seek.\n";
    std::cout << "To become good enough with " << dream << ", you will need to dedicate:\n\n";
    std::cout << static_cast<int>(total_days) << " days\n";
    std::cout << "~ " << std::fixed << std::setprecision(1) << total_weeks << " weeks\n";
    std::cout << "~ " << std::fixed << std::setprecision(1) << total_months << " months\n\n";

    std::cout << "By the end of this time, you will be good enough at it IF you practice " << hours << " hours a day for " << days << " days each week.\n";
    std::cout << "You won't become the best in the world, but you will be average at it, which is a good start, above most people, and you won't be a beginner anymore.\n\n";
    std::cout << "Remember: 'The main barrier is not intellectual, it's emotional' - Josh Kaufman\n\n";
    std::cout << "The Hourglass of Dreams wishes you good luck and hard work on your journey to mastery.\n\n";
    std::cout << "End of the dream.\n";
    
    system("pause");
    return 0;
}
