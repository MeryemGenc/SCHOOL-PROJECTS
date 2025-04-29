#include "file_replace.hpp"


FileReplace::FileReplace()
{
}

FileReplace::~FileReplace()
{
}

std::string FileReplace::ft_replace(std::string file_str, std::string s1, std::string s2)
{
    if (!s1.empty())
    {
        size_t i = file_str.find(s1);
        /*find Fonksiyonu: std::string sınıfının bir üyesidir ve belirli bir alt dizenin konumunu bulmak için kullanılır. Eğer alt dize bulunursa, başlangıç konumunu döndürür; bulunamazsa, std::string::npos değerini döndürür.
        
        while (index != std::string::npos): Bu ifade, bir while döngüsü kullanarak bir std::string içinde belirli bir alt dizenin tüm bulunduğu konumları bulma mantığını temsil eder. Döngü, find fonksiyonu std::string::npos değeri döndürene kadar devam eder. */
        while (i != std::string::npos)
        {
            file_str.erase(i, s1.size());
            file_str.insert(i, s2);
            i = file_str.find(s1);
        }
    }
    return file_str;
}

