using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        long i,sum;
        cin >> n;
        long a = 0;
        long b = 1, temp;
        sum = 0;
        while(a+b < n)
        {
            temp = (a+b);
            if(temp%2 == 0)
            {
                sum = sum + temp;
            }
            a = b;
            b = temp;
        }
 
       cout<<sum<< endl;
    }
    return 0;
}