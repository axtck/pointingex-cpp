#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int num_scores = 5;
    int scores[num_scores] = {11, 14, 15, 13, 16};

    for (int i = 0; i < num_scores; ++i)
    {
        cout << scores[i] << " "; // print separate scores
    }

    cout << endl;

    int *pscores = &scores[0]; // pointer to first element

    cout << "Pointer addres: " << pscores << "." << endl;
    cout << "Value from dereferenced pointer: " << *pscores << "." << endl;

    cout << "Wrong pointer arithmetic: *pscores + 1: " << *pscores + 1 << "." << endl;
    cout << "Right pointer arithmetic: *(pscores + 1): " << *(pscores + 1) << "." << endl;

    for (int i = 0; i < num_scores; i++)
    {
        cout << *(pscores + i) << " "; // pointer access (faster)
    }

    cout << endl;

    // array declaration name is pointer to first value
    cout << "Pointer to array declaration name: *scores: " << *scores << endl;
    for (int i = 0; i < num_scores; i++)
    {
        cout << *(scores + i) << " ";
    }

    return 0;
}