
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = 0;
            for (int j = 0; j < n; j++)
            {
                {
                    if (a[i] > a[j])
                        c[i]++;
                    if (b[i] > b[j])
                        c[i]++;
                }
                cout<<c[i]<<endl;
            }
            
        }
        max(n, c);
    }