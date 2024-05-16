#include <bits/stdc++.h>
using namespace std;
void TOH(char source, char aux, char dest, int n)
{
    if (n == 0)
        return;
    TOH(source, dest, aux, n - 1);
    cout << "Disk- " << n << "-" << source << "->" << dest << endl;
    TOH(aux, source, dest, n - 1);
}
main()
{
    int n;
    cin >> n;
    TOH('A', 'B', 'C', n);
    cout << "Completed";
}