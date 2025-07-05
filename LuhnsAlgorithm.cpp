//#include<iostream>
//using namespace std;
//struct ATMCard
//{
//	long long int cardNumber;
//	int getNoOfDigits(long long int n)
//	{
//		int count = n == 0 ? 1 : 0;
//		while (n != 0)
//		{
//			count++;
//			n /= 10;
//		}
//		return count;
//	}
//	int getFirstNDigits(int count,long long int number)
//	{
//		for (int i = getNoOfDigits(number); i > count; i--)
//		{
//			number /= 10;
//		}
//		return number;
//	}
//	int sumOfDigits(int n)
//	{
//		int sum = 0;
//		while (n != 0)
//		{
//			sum += n % 10;
//			n /= 10;
//		}
//		return sum;
//	}
//	bool isValidCardNumber()
//	{
//		long long int sum = 0,n=cardNumber;
//		bool isSecond = false;
//		while (n != 0)
//		{
//			if (isSecond)
//			{
//				sum += sumOfDigits((n% 10)*2);
//			}
//			else
//			{
//				sum += n % 10;
//			}
//			isSecond = !isSecond;
//			n /= 10;
//		}
//		if (sum % 10 == 0)
//		{
//			return true;
//		}
//		return false;
//	}
//	void checkCardType()
//	{
//		if (isValidCardNumber())
//		{
//			if (getNoOfDigits(cardNumber) == 15 && (getFirstNDigits(2, cardNumber) == 34 || getFirstNDigits(2, cardNumber) == 37))
//			{
//				cout << "AMEX\n";
//			}
//			else if (getNoOfDigits(cardNumber) == 16 && (getFirstNDigits(2, cardNumber) >= 51 && getFirstNDigits(2, cardNumber) <= 55))
//			{
//				cout << "MASTERCARD\n";
//			}
//			else if ((getNoOfDigits(cardNumber) >= 13 && getNoOfDigits(cardNumber) <= 16 )&&(getFirstNDigits(1, cardNumber)==4))
//			{
//				cout << "VISA\n";
//			}
//			else
//			{
//				cout << "INVALID\n";
//			}
//		}
//		else
//		{
//			cout << "INVALID\n";
//		}
//	}
//};
//int main()
//{
//	ATMCard a;
//	a.cardNumber = 3520225814002;
//	cout<< a.isValidCardNumber();
//}