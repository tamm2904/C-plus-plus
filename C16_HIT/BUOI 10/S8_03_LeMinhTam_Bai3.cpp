#include <iostream>
using namespace std;

void sort (int p[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}


void print(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

void Delete(int p[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        p[i] = p[i + 1];
    }
    n--;
}

int adjust(int p[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] < 0)
        {
            p[i] = (-p[i]);
            count++;
        }
    }
    sort(p, n);
    return count;
}

int findSum (int p[], int n, int start)
{
    int sum = 0;
    for (int i = start; i < n; i += 2)
    {
        sum += p[i];
    }

    cout << sum << endl;
    return sum;
}


int findUCLL (int a, int b)
{
    int tmp = (a < b ? a : b);

    for (int i = tmp; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << endl;
            return i;
        }
    }
}


int main ()
{
    int n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, n);
    print(p, n);
    int count = adjust(p, n);
    print(p, n);
    cout << count << endl;
    Delete(p, n, count);
    print(p, n);
    int sum1 = findSum(p, n, 0), sum2 = findSum(p, n, 1);
    int UCLL = findUCLL(sum1, sum2);
    if ((sum1 + sum2 ) - 18 * UCLL > 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
    delete[] p;
    return 0;
}