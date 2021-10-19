using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter value a:" << endl;
    cin >> a;
    cout << "Enter value b:" << endl;
    cin >> b;
    cout << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Your numbers" << endl << a << endl << b << endl;
}