#include <iostream>

int main()
{
    std::string questions[] = {"1.What is Your Name?",
                               "1.What is Your Age?",
                               "1.Which is Your Shool?",
                               "1.What is Your BirthYear?"};
    std::string options[][4] = {
        {"A. Akash", "B. Tanvi", "C. Harsha", "D. Nihal"},
        {"A. 12", "B. 26", "C. 19", "D. 25"},
        {"A. TNU", "B. ATIS", "C. PPIS", "D. KKRS"},
        {"A. 2000", "B. 2003", "C. 2001", "D. 2004"},
    };
    char AnsKey[] = {'A', 'C', 'A', 'D'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;
    char reTest='A';
    do
    {
        for (int i = 0; i < size; i++)
        {

            std::cout << "***********************************************\n";
            std::cout << questions[i] << "\n\n";
            for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++)
            {
                std::cout << options[i][j] << '\n';
            }
            std::cout << "Enter your Ans:";
            std::cin >> guess;
            guess = toupper(guess);
            if (guess == 'A' || guess == 'B' || guess == 'C' || guess == 'D')
            {
                if (guess == AnsKey[i])
                {
                    std::cout << "CORRECT!\n";
                    score++;
                }
                else
                    std::cout << "WRONG!\n";
            }
            else
                std::cout << "Your Choice Is Invalid !\n";
        }
        std::cout << "You Score Count Is: " << score << '\n';
        score >= 3 ? std::cout << "Status : PASS!\n" : std::cout << "Status : FAIL!\n";
        std::cout << "Enter[R/r] for Retest: ";
        std::cin >> reTest;
        reTest = toupper(reTest);
        if (reTest == 'R')
            score = 0;

    } while (reTest == 'R');

    return 0;
}