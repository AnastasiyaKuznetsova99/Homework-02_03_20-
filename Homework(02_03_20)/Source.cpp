#include <memory>
#include <iostream>
#include <vector>

/* При нехватке памяти (когда размер сравнивается с емкостью) выделяется емкость приблизительно в k = 1.4 
(в конечном итоге k стремится к 1.5) больше текущего размера; 
При заблаговременном выделении емкости она не изменяется до тех пор, пока размер вектора не становится 
точно равным емкости, далее увеличение происходит по схеме, оgисанной выше;

*/

int main()
{
	/*std::vector<int> myVector(8800000, 12);
	myVector.reserve(40);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(2);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(44);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(77);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(8);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(17);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(9);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(57);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(38);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(27);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(11);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(88);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(97);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(21);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(1);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(2);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(7);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(25);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(100);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(101);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(102);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(103);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(104);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(105);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(106);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(107);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(108);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(109);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(110);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(111);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(112);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(113);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(114);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(115);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(116);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(117);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(118);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(119);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(120);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(121);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(122);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(123);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	myVector.push_back(124);
	std::cout << "Vector size: " << myVector.size() << std::endl;
	std::cout << "Vector capacity: " << myVector.capacity() << std::endl;*/
	/*for (int i = 0; i < myVector.size(); i++) 
	{
		std::cout << myVector[i] << std::endl;
	}*/
	//std::cout << "Vector capacity: " << myVector.capacity() << std::endl;
	std::vector<int> myVector;
	try 
	{
		for (size_t i = 0; i < std::numeric_limits<size_t>::max(); i++) 
		{
			myVector.push_back(0);
		}

	}
	catch (std::bad_alloc& a) 
	{
		std::cout << a.what() << std::endl;
	}
	system("pause");
	return 0;
}