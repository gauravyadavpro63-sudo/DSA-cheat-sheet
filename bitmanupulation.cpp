# BASICS OF BITMANIPULATION


// 1️⃣ AND & — BOTH MUST BE 1
// 2️⃣ OR | — AT LEAST ONE MUST BE 1
// 3️⃣ XOR ^ — DIFFERENT = 1, SAME = 0
// 4️⃣ NOT ~ — FLIP EVERYTHING
// 5️⃣ LEFT SHIFT << — MULTIPLY BY 2
// Rule: Move bits left, add 0s on right

// Example:  13 << 2
//   13 = 1101
//   <<2 = 110100  = 52

// Formula: n << k = n * 2^k

// Use: Quick multiply by 2
// 6️⃣ RIGHT SHIFT >> — DIVIDE BY 2
// Rule: Move bits right, drop bits on right

// Example:  13 >> 2
//   13 = 1101
//   >>2 = 11  = 3

// Formula: n >> k = n / 2^k (floor)

// Use: Quick divide by 2


// Check bit:   n & (1 << k)
// Set bit:     n | (1 << k)
// Clear bit:   n & ~(1 << k)
// Toggle bit:  n ^ (1 << k)
// Even check:  n & 1 == 0
// Odd check:   n & 1 == 1
// Multiply:    n << 1
// Divide:      n >> 1

// Total bits in int: 32
// 1 bit for sign (+, -)
// 31 bits for value

// Range: -2³¹ to 2³¹ - 1

// Positive:  0 to 2³¹ - 1   (includes zero)
// Negative:  -2³¹ to -1      (no zero)
// Total:     2³² values      (all 32 bits)




#CONVERT NUMBER TO BINARY REPRESENTATION

// string numbertobits(int n,string s){
//     // sc=logn tc=logn
//     while(n!=0){
//         if(n%2==1) s.push_back('1');
//         else s.push_back('0');
//         n=n/2;
//     }
//      reverse(s.begin(),s.end());
//     return s;
// }


#CONVERT BINARY TO NUMBER REPRESENTATION


// 	tc=O(n) where n = length of string	  sc=O(1)
// int  bitstonumber(string s){
//     int num=0;
//     int power=1;
// for(int i=s.size()-1;i>=0;i--){
//     if(s[i]=='1'){
//      num=num+power;
//     }
//     power=power*2;
// }
// return num;
// }


#CHECK NTH BIT IS SET OR NOT


// bool CheckNthBitIsSetOrNot(int a,int n){
//     if((a&(1<<n))!=0) return true;
   
//     else return false;
// }


#DIVIDE TWO INTEGER WITHOUT DIVIDER


// int divide_two_integer_without_divider(int numerator,int denomenator){
    // ✅ Time: O(|dividend| / |divisor|)
// ✅ Space: O(1)
//     long long count=0;
//     long long copynumerator=abs((long long)numerator);
//     long long copydenomenator=abs((long long)denomenator);
//     bool sign =true;
//       if(numerator>=0&&denomenator<0) sign=false; 
//        if(numerator<=0&&denomenator>0) sign=false;
//     if(denomenator==0) return 0;
//     if (numerator == INT_MIN && denomenator == -1)
//     return INT_MAX;

//     while(copynumerator>=copydenomenator){
//           copynumerator-=copydenomenator;
//           count++;
//     }

// //     return sign?count:-1*count;
// long long copynumerator=abs((long long)numerator);
// long long copydenomenator=abs((long long)denomenator);
// bool sign =true;
// if(numerator>=0&&denomenator<0) sign=false;
// if(numerator<=0&&denomenator>0) sign=false;
// if(denomenator==0) return 0;
// long long ans=0;
// while(copynumerator>=copydenomenator){
//     int shift=0;
//     while(copynumerator>=(copydenomenator<<(shift+1))){
//         shift++;
//     }
//     ans=ans+(1<<shift);
//     copynumerator=copynumerator-(copydenomenator<<shift);

// }
// if(ans==1<<31&&sign) return INT_MAX;
// if(ans==1<<31&&!sign) return INT_MIN;
// return sign?ans:-1*ans;




#swap without using extra variable
// a=a^b;
// b=a^b;
// a=a^b;
// cout<<a<<b;



#set nth  bit 
// a=a|(1<<n);
// cout<<a;

#clear nth bit(make it 0);
// a=a&~(1<<n)
// cout<<a;


# toggle nth bit
a=a^(1<<n);
cout<<a;


remove the last set bit
// a=a&a-1;
// cout<<a;


check if the number is power of two   //will have only one set bit
// if((a&(a-1))==0) return true



count no of set bit
// tc=log2(n)
// int count=0;
// while(a>0){
//     // if(a%2==1) count++;a % 2 checks whether the number is odd. For positive integers, an odd number has a rightmost bit of 1.
//     // a=a/2;

 or
//     count+=a&1;
//     a=a>>1;
// }
// cout<<count;

//  cout<<__builtin_popcount(a); stl way
//  #EVEN BETTER: BRIAN KERNIGHAN'S ALGORITHM tc=O(no of set bit);

// int count=0;
// while(a>0){
//     a=a&(a-1);
//     count++;
// }
// cout<<count;

//check no is odd or not
// return a & 1;
// Binary of odd numbers always end with 1:

#MINIMUM FLIP TO CONVERT ONE NUMBER TO ANOTHER

// brute force / tc=O(31);
// int minimum_bits_to_flip(int a,int b){
//     int result=a^b;
//     int count=0;
    // for(int i=0;i<=31;i++){
    //     if((result&(1<<i))){
    //         count++;
    //     }
    // }
    // return count;
    // log2(a^b)  optimal solution 

    // while(result){
    //     result=result&(result-1);
//         count++;
//     }
//     return count;
// }

#SINGLE NUMBER I

// int single_numberI(vector<int>arr){
//     // TC = O(n)
//     int xorr=0;
//     for(int i=0;i<arr.size();i++){
//      xorr=xorr^arr[i];
//     }
//     return xorr;
// }

#XOR OF NUMBERS FROM RANGE 0 TO N


// int xor_of_number_in_given_range(int n){
    // brute solution tc=O(n) 
    // int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans=ans^i;
    // }
    // return ans;
    
    // optimal solution tc=O(1):
    // if(n%4==0) return n;
    // if(n%4==1) return 1;
    // if(n%4==2) return n+1;
    // if(n%4==3) return 0;

// }

#XOR OF NUMBERS FROM RANGE L TO R

// int xor_of_number_in_given_rangeII(int l,int r){
//     int ans=0;
//     for(int i=l;i<=r;i++){
//         ans=ans^i;
//     }
//     return ans;
//    optimal solution
// return xor_of_number_in_given_range(l-1)^xor_of_number_in_given_range(r);
// }

#SINGLE NUMBER III

vector<int> single_numberIII(vector<int>arr){
    // brute force kal lena yaar already kiya hai 
    // optimaal solution tc=O(2n) sc=O(1);
//     long long xorr=0;
//     int b1=0;
//     int b2=0;
//     for(int i=0;i<arr.size();i++){
//       xorr=xorr^arr[i];
//     }
//     int rightmost=(xorr&(xorr-1))^xorr;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]&rightmost){
//             b1=b1^arr[i];
//         }
//         else{
//             b2=b2^arr[i];
//         }
//     }
//     return {b1,b2};
// }



