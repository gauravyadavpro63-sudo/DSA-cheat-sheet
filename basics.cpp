//     *                                
//    ***
//   *****
//  *******
//   *****
//    ***
//     *
    
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     // Upper half
//     for (int i = 1; i <= n; i++) {

//         // spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = n - 1; i >= 1; i--) {

//         // spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }




// int reverse(int n)
// {
//   int rev = 0;
//   while (n > 0)
//   {
//     int num = n % 10;
//     rev = rev * 10 + num;
//     n = n / 10;
//   }
//   return rev;
// }


//   vector<int> ls;
//   for (int i = 1; i <= sqrt(n); i++)
//   {
//     if (n % i == 0)
//     {
//       ls.push_back(i);
//       if ((n / i) != i)
//       {
//         ls.push_back(n / i);
//       }
//     }
//   }
//   sort(ls.begin(), ls.end());
//   for (auto it : ls)
//   {
//     cout << it << " ";
//   }
// }



//  bool palindrome(int i ,string a){
//     if(i>=a.size()/2){
//         return true;
//     } 
//     if(a[i]!=a[a.size()-i-1]){
//         return false;
//     }
//     return palindrome(i+1,a);

//  }



// int febonaci(int a){
//     if(a<=1){
//         return a;
//     }
//     int last=febonaci(a-1);
//     int second_last=febonaci(a-2);
//     return  last+second_last;
// }



//  use unordererd map  as it has time complexity of O(1) in average and best cases but in worst 
//  cases its n because of collision    so then use map instead , map has logn


selection sort O(n*n)  sabse chota ko selecto karo  aur sabse pahle dalo .....

bubble sort O(n*n) but in best case O(n)  jo sabse bada hoga wo last me chala jayega

insertion sort O(n*n) ex- 2,3,1,5  one ko uthayega aur apni place par insert kar dega