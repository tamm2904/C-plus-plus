#include <iostream>
#include <cstdlib>
using namespace std;

void print(float p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;
}

void Delete (float p[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        p[i] = p[i + 1];
    }
    n--;
}

void separate (float p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i] > 0)
        {
            cout << p[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (p[i] < 0)
        {
            cout << p[i] << " ";
        }
    }
    cout << endl;
}


int main ()
{   
    float *p = new float[1];
    int n = 0;
    while(n <= 50)
    {
        p = (float *) realloc(p, (n + 1) * sizeof(float));
        cin >> p[n];
        if(p[n] == -1)
        {
            break;
        }
        n++;
    }

    print(p, n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(p[i] == p[j])
            {
                Delete(p, n, j);
                j--;
            }
        }
    }
    print(p, n);
    separate(p, n);
    return 0;
}