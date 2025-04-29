#include "file_replace.hpp"

int main(int argc, char **argv)
{

    if (argc != 4)
    {
        std::cout << "Wrong arguments." << std::endl;
        return 1;
    }
    FileReplace rep_obj;
    /*
		"std::ifstream ifs(argv[1]);"

		std::ifstream: C++'ta dosya okuma işlemleri için kullanılan bir sınıftır. ifstream, "input file stream" anlamına gelir.

		ifs: Bu, std::ifstream türünde bir nesnedir. ifs ismi genellikle "input file stream" için kısaltma olarak kullanılır.

		argv[1]: Bu, programın komut satırı argümanlarından alınan ikinci argümandır (argv[0] genellikle programın adını içerir, bu nedenle argv[1] dosya adını içerir).

		Sonuç olarak, std::ifstream ifs(argv[1]); satırı, programın çalıştırıldığı komut satırından alınan dosya adını kullanarak bir giriş dosyasını (std::ifstream) temsil eden bir nesne oluşturur. Bu dosya daha sonra program tarafından okunabilir ve içeriği işlenebilir. Bu durumda, ifs nesnesi programın okuma işlemleri için kullanılacaktır.
    */
   	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "File cant open. Be sure filename is correct!" << std::endl;
		return 1;
	}
	std::string str;
	std::getline(ifs, str, '\0');
	ifs.close();
	str = rep_obj.ft_replace(str, argv[2], argv[3]); // sıkıntı çıkarsa argv[2], argv[3]=> bu 2liyi değişkene atayıp öyle çağır- ya daaaaaa std::string(argv[2]) && std::string(argv[3]) olarak çağır.
	std::ofstream ofs(argv[1] + std::string(".replace"));
	/*
		C++ dilinde, C-style string'leri (char* veya const char*) doğrudan diğer string türleriyle birleştiremezsiniz. Bu tür birleştirmelerde uyumluluk sorunları olabilir. Bu nedenle, .replace string'ini bir std::string nesnesine dönüştürmek, C++ string işleme fonksiyonlarını daha güvenli bir şekilde kullanmanıza olanak tanır.
	*/
	if (!ofs.is_open())
	{
		std::cout << "The output file cant open." << std::endl;
		return 1;
	}
	ofs << str;
	ofs.close();
    return 0;
}
