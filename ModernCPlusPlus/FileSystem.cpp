//C++ : Check if given path is a file or directory using Boost & C++17 FileSystem Library
#include <filesystem>
#include <iostream>

using namespace std::filesystem;

/*
Check if given string path is of a Directory
*/
bool checkIfDirectory(std::wstring filePath)
{
	try {
		// Create a Path object from given path string
		path pathObj(filePath);
		// Check if path exists and is of a directory file
		if (exists(pathObj) && is_directory(pathObj))
			return true;
	}
	catch (filesystem_error& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return false;
}

/*
	Check if given string path is of a file
*/
bool checkIfFIle(std::wstring filePath)
{
	try {
		// Create a Path object from given path string
		path pathObj(filePath);
		// Check if path exists and is of a regular file
		if (exists(pathObj) && is_regular_file(pathObj))
			return true;
	}
	catch (filesystem_error& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return false;
}

int main(int argc, char* argv[])
{
	std::wstring filename = L"G:\\Projects\\VisualStudioProject\\ModernCPlusPlus\\ModernCPlusPlus.sln";
	auto a = checkIfFIle(filename);
	path pathObj(filename);
	// 替换后缀
	//pathObj.replace_extension();
	// 替换文件名
	//pathObj.replace_filename();
	// 相对路径
	std::cout << pathObj.relative_path() << std::endl;
	std::cout << pathObj.relative_path() << std::endl;
	std::cout << absolute(pathObj) << std::endl;
	
	return 0;
}