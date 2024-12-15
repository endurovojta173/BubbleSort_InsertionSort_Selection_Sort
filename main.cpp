#include <iostream>
//Selection sort
void selectionSort(int poleCisel[], int velikostPole)
{
    for (int i = 0; i < velikostPole; i++)
    {
        int nejvetsiCislo = poleCisel[i];
        int poziceNejvetsiho = i;
        for (int j = i; j < velikostPole; j++)
        {
            if (nejvetsiCislo < poleCisel[j])
            {
                nejvetsiCislo = poleCisel[j];
                poziceNejvetsiho = j;
            }
        }
        poleCisel[poziceNejvetsiho] = poleCisel[i];
        poleCisel[i] = nejvetsiCislo;
    }
}

//Insert sort

void insertionSort(int pole[], int velikostPole)
{
    for (int i = 0; i < velikostPole; i++)
    {
        int momentalniCislo = pole[i];
        int j = i-1;
        while (pole[j] < momentalniCislo and j>=0)
        {
            pole[j+1] = pole[j];
            pole[j] = momentalniCislo;
            j--;
        }
    }
}

//Bubble sort
void bubbleSort(int pole[], int velikostPole)
{
    for (int i = 0; i < velikostPole-1; i++)
    {
        for (int j = 0; j < velikostPole-i-1; j++)
        {
            if (pole[j] > pole[j+1])
            {
                int pomocnik = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = pomocnik;
            }
        }
    }
}


void vypisPole(int poleCisel[], int velikostPole)
{
    for (int i = 0; i < velikostPole; i++)
    {
        std::cout << poleCisel[i] << ", ";
    }
}

int main()
{
    int poleCisel[10] = {9, 8, 5, 1, 4, 3, 9, 7, 53, 1};


    vypisPole(poleCisel, 10);
    std::cout << std::endl;
    //selectionSort(poleCisel, 10);
    //insertionSort(poleCisel, 10);

    bubbleSort(poleCisel, 10);
    vypisPole(poleCisel, 10);
    return 0;
}
