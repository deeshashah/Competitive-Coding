using namespace std;


int main() {
    int n,i;
    string s,ans;
    cin >> n;
    //cout << n;
    double num;
    double sum =0;
    for(i=1;i<=n;i++)
    {
        cin >> num;
        sum  = sum + num;
    }
    //cout << sum;
    s = to_string(sum);
    for(i=0;i<=9;i++)
    {
        ans[i] = s[i];
        cout << ans[i];
    }
    cout << ans;
    return 0;
}
