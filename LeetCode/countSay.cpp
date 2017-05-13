class Solution {
public:
    string countAndSay(int n) {
        string seq[n+1];
        long long int i,j;
        long long int digit_count,pre_num,count,c;
        seq[1] = "13211311123113112211";
        cout<<seq[1]<<endl;
        for(i=2;i<=n;i++)
        {
            digit_count = 0;
            long long int prev_num ;
            cout<<prev_num<<endl;
            while(prev_num > 0)
            {
                //int nextVal = prev_num %10;
                //cout << nextVal << endl;
                digit_count = digit_count + 1;
                //cout << prev_num <<endl;
                prev_num = prev_num/10;
                //cout << 11/10 <<endl;
            }
            //cout << digit_count <<endl;
            long long int temp[digit_count+1];
            count = digit_count;
            prev_num = seq[i-1];
            while (prev_num != 0)
            {
                temp[count] = prev_num % 10;
                prev_num /= 10;
                count--;
            }
            long long int pre = temp[1];
            c = 1;
            string word = "";
            for(j=2;j<=(digit_count);j++)
            {
               if(pre == temp[j])
               {
                   c = c+1;
               }
               else
               {
                   
                   word = word + to_string(c) + to_string(pre);
                   //cout<<word<<endl;
                   pre = temp[j];
                   c = 1;
               }
            }
            word = word + to_string(c) + to_string(pre);
            cout << word <<endl;
            //seq[i] = strtod( word.c_str(),NULL );
            //seq[i] = atolli( word.c_str() );
            //cout<<d<<endl;
            
        }
        string answer = to_string(seq[n]);
        //cout<<answer<<endl;
        return "1";
    }
};