#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
     // -----------------------------------while loop

     //    int i;
     //    cin>>i;
     //    int sum = 0;
     //    int n=1;
     //      while (n<=i)
     //      {
     //           sum = sum +n;

     //           n++;
     //      } cout<<sum<< " ";

     // ------------------------------ 5 multiple and 7
     // int i = 5;
     // while (true)
     // {
     //      if (i % 7 == 0)
     //      {
     //           cout << i << endl;
     //           break;
     //      }
     //      i += 5;
     // }

     //-----------------------------for loop

     // int n;
     // cin >>n;
     // int sum=0;
     // for (int i = 0; i <= n; i++)
     // {
     //   sum+=i;
     // }cout<<sum;
     // ------------------------------------------------F

     // for (int i = 5;; i += 5)
     // {
     //      if (i % 7 == 0)
     //      {
     //           cout << i;
     //           break;
     //      }
     // }

     // ------------------------------------do while loop -

     // int i=9;
     // int i,n;cin>>i>>n;

     // int sum =0;
     // do
     // {
     //      sum +=i;
     //      i--;

     // } while (i>=n);
     // cout<<sum;


// ------------------------------------------
     // int n;
     // cin >> n;
     // int sum = 0;

     // for (int i = 0; i < n; i++)
     // {
     //      if (i%2==0)
     //      {
     //       sum = sum + i;
     //      }

     // }
     // cout<<sum;
// -------------------------------------------
// int i=1;
//      while (i<=n)
//      {
//         if (i%2==0)
//           {
//            sum = sum + i;
//           }
//         i++;
//      }
//      cout<<sum;
     
// ------input only postive number, when -ve number loop terminl?

int n;
cin>>n;

while (n>0)
{
   cout<< n;
   cin >>n;
}


     return 0;
}
