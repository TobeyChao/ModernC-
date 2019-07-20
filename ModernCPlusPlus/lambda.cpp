//#include <iostream>
//#include <algorithm>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	std::for_each(arr, arr + sizeof(arr) / sizeof(int), [&](int x) {
//		x++;
//		std::cout << x << " ";
//	});
//
//	std::cout << std::endl;
//
//	system("pause");
//}
//
//#include <iostream>
//#include <algorithm>
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	int mul = 5;
//
//	std::for_each(arr, arr + sizeof(arr) / sizeof(int), [&](int x) {
//		std::cout << x << " ";
//		// Can modify the mul inside this lambda function because
//		// all outer scope elements has write access here.
//		mul = 3;
//	});
//	std::cout << std::endl;
//
//	std::for_each(arr, arr + sizeof(arr) / sizeof(int), [=](int &x) {
//		x = x * mul;
//		// Can not modify the mul inside this lambda function because
//		// all outer scope elements has read only access here.
//		// mul = 9;
//
//	});
//	std::cout << std::endl;
//
//	std::for_each(arr, arr + sizeof(arr) / sizeof(int), [](int x) {
//
//		// No access to mul inside this lambda function because
//		// all outer scope elements are not visible here.
//		//std::cout<<mul<<" ";
//	});
//	std::cout << std::endl;
//
//}

//////////////////////////////////////////////ÊµÀý
//#include <iostream>
//#include <string>
//#include <functional>
//
//std::function<void()> getCallBack()
//{
//	// Local Variable
//	int counter = 10;
//
//	// Defining Lambda function and
//	// Capturing Local variables by Reference
//	auto func = [&counter]() mutable {
//		std::cout << "Inside Lambda :: counter = " << counter << std::endl;
//
//		// Change the counter
//		// Change will affect the outer variable because counter variable is
//		// captured by Reference in Lambda function
//		counter = 20;
//
//		std::cout << "Inside Lambda :: After changing :: counter = " << counter << std::endl;
//
//	};
//
//	return func;
//}
//
//int main(int argc, char **argv)
//{
//
//	std::function<void()> func = getCallBack();
//
//	//Call the Lambda function
//	func();
//
//	// Lambda function will access and modify the variable that has been captured it by reference
//	// But that variable was actually a local variable on stack which was removed from stack when getCallbacK() returned
//	// So, lambda function will basically corrupt the stack
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//class OddCounter
//{
//	// tracks the count of odd numbers encountered
//	int mCounter = 0;
//public:
//	int getCount()
//	{
//		return mCounter;
//	}
//	void update(std::vector<int> & vec)
//	{
//		// Traverse the vector and increment mCounter if element is odd
//		// this is captured by value inside lambda
//		std::for_each(vec.begin(), vec.end(), [this](int element) {
//			if (element % 2)
//				mCounter++; // Accessing member variable from outer scope
//		});
//	}
//};
//
//
//int main(int argc, char **argv)
//{
//	std::vector<int> vec = { 12,3,2,1,8,9,0,2,3,9,7 };
//
//	OddCounter counterObj;
//
//	//Passing the vector to OddCounter object
//	counterObj.update(vec);
//
//	int count = counterObj.getCount();
//
//	std::cout << "Counter = " << count << std::endl;
//	return 0;
//}