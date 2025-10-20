#include <stdio.h>
#include <math.h>
#include "mylib.h"

//Palindrome
int reverseDigits(int n) {
int rev = 0;
while (n > 0) {
rev = rev * 10 ;
rev+=n%10;
n /= 10;
}
return rev;
}


//Armstrong
int isArmstrong(int num) {
int sum = 0, x = num, count = 0;
while (x > 0) {
count++;
x /= 10;
}
x = num;
while (x > 0) {
int rem = x % 10;
int power = 1;
for (int i = 1; i <= count; i++)
power *= rem;
sum += power;
x /= 10;
}
return (sum == num);
}


//Adams
int isAdams(int num) {
int sq = num * num;
int revNum = reverseDigits(num);
int revSq = reverseDigits(sq);
int revNumSq = revNum * revNum;
return (revSq == revNumSq);
}


int isPrime(int num) {
if (num <= 1) return 0;
for (int i = 2; i <= num-1; i++) {
if (num % i == 0)
return 0;
}
return 1;
}


int isPrimePalindrome(int num) {
if (isPrime(num) && num == reverseDigits(num))
return 1;
return 0;
}