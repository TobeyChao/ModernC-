////C++ : Check if given path is a file or directory using Boost & C++17 FileSystem Library
//#include <experimental/filesystem>
//#include <iostream>
//
//namespace filesys = std::experimental::filesystem;
//
///*
//Check if given string path is of a Directory
//*/
//bool checkIfDirectory(std::string filePath)
//{
//	try {
//		// Create a Path object from given path string
//		filesys::path pathObj(filePath);
//		// Check if path exists and is of a directory file
//		if (filesys::exists(pathObj) && filesys::is_directory(pathObj))
//			return true;
//	}
//	catch (filesys::filesystem_error & e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	return false;
//}
//
///*
//	Check if given string path is of a file
//*/
//bool checkIfFIle(std::string filePath)
//{
//	try {
//		// Create a Path object from given path string
//		filesys::path pathObj(filePath);
//		// Check if path exists and is of a regular file
//		if (filesys::exists(pathObj) && filesys::is_regular_file(pathObj))
//			return true;
//	}
//	catch (filesys::filesystem_error & e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	return false;
//}
//
//int main(int argc, char* argv[])
//{
//	auto a = checkIfFIle("G:/My Projects/VisualStudioProject/C++/ModernCPlusPlus/ModernCPlusPlus.sln");
//
//	std::cout << a;
//	system("pause");
//}