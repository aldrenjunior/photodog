#include <iostream>
#include <fstream>
#include <cstring>

const int MAX = 512;

void returnExtension(char name[], char lastThree[])
{

    for (int i = 0; i < 4; ++i)
    {
        lastThree[i] = name[int(strlen(name)) - 4 + i];
    }

    lastThree[4] = '\0';
}

int main()
{
    int startProgram, userChoice, binarization;
    char nameBefore[MAX], extensao[5];

    do
    {
        std::cout << "-----------------------------\n";
        std::cout << "---  Welcome to Photodog  ---\n";
        std::cout << "Do you want to use our program?\n";
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";
        std::cout << " -> ";
        std::cin >> startProgram;

        if (startProgram == 2)
            return 0;

        if (startProgram == 1)
        {
            do
            {
                std::cout << "\nTo perform an operation in Photoshop, enter it's respective number below:\n";
                std::cout << "1. Binarization\n";
                std::cout << "2. Horizontal Rotation\n";
                std::cout << "3. Erosion\n";
                std::cout << "4. Median Filtering\n";
                std::cout << " -> ";
                std::cin >> userChoice;
                std::cin.ignore();
            } while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4);

            switch (userChoice)
            {
            case 1:
                do
                {
                    std::cout << "\n1. Binarization\n";
                    std::cout << "\nDo you want to perform normal or mask binarization?\n";
                    std::cout << "1. Normal Binarization \n";
                    std::cout << "2. Mask Binarization \n";
                    std::cout << " -> ";
                    std::cin >> binarization;
                    std::cin.ignore();
                } while (binarization != 1 && binarization != 2);

                switch (binarization)
                {
                case 1:
                    do
                    {
                        std::cout << "\n1. Normal Binarization\n";
                        std::cout << "\nPlease enter the name of the file to be edited with the extension '.ppm': ";
                        std::cin.getline(nameBefore, MAX);

                        returnExtension(nameBefore, extensao);

                    } while (std::string(extensao) != ".ppm");

                    break;

                case 2:
                    do
                    {
                        std::cout << "\n1. Mask Binarization\n";
                        std::cout << "\nPlease enter the name of the file to be edited with the extension '.ppm': ";
                        std::cin.getline(nameBefore, MAX);

                        returnExtension(nameBefore, extensao);

                    } while (std::string(extensao) != ".ppm");

                    break;
                }

                break;

            case 2:
                do
                {
                    std::cout << "\n2. Horizontal Rotation";
                    std::cout << "\nPlease enter the name of the file to be edited with the extension '.ppm': ";
                    std::cin.getline(nameBefore, MAX);

                    returnExtension(nameBefore, extensao);

                } while (std::string(extensao) != ".ppm");

                break;

            case 3:
                do
                {
                    std::cout << "\n3. Erosion";
                    std::cout << "\nPlease enter the name of the file to be edited with the extension '.ppm': ";
                    std::cin.getline(nameBefore, MAX);

                    returnExtension(nameBefore, extensao);

                } while (std::string(extensao) != ".ppm");

                break;

            case 4:
                do
                {
                    std::cout << "\n4. Median Filtering";
                    std::cout << "\nPlease enter the name of the file to be edited with the extension '.ppm': ";
                    std::cin.getline(nameBefore, MAX);

                    returnExtension(nameBefore, extensao);

                } while (std::string(extensao) != ".ppm");

                break;
            }
        }
    } while (startProgram != 1 && startProgram != 2);

    return 0;
}