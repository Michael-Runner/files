#include <iostream>
#include <vector>
#include <string>
#include <experimental/filesystem>
#include <fstream>

namespace fs = std::experimental::filesystem::v1;
using namespace std;

std::vector<std::string> get_filenames(std::experimental::filesystem::path path)
{
	namespace stdfs = std::experimental::filesystem;

	std::vector<std::string> filenames;

	const stdfs::directory_iterator end{};

	for (stdfs::directory_iterator iter{ path }; iter != end; ++iter)
	{
		if (stdfs::is_regular_file(*iter))
		{
			filenames.push_back(iter->path().string());

			string str;
			for (auto const& s : filenames) { str = s; }

			if (str.substr(str.find_last_of(".") + 1) == "docx" or str.substr(str.find_last_of(".") + 1) == "txt")
			{

			}
			else if (str.substr(str.find_last_of(".") + 1) == "cpp")
			{

			}
			else
			{

			}
		}

	}
	return filenames;
}
