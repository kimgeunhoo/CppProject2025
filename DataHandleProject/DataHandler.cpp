#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{
    std::ifstream file(filename);

    if (!file.is_open()) // 파일이 열리지 않았을 때
    {
        std::cerr << "파일을 열지 못했습니다." << filename << std::endl;
        return 0;
    }

    int itemCount = 0;
    std::string line;

    // item 항목을 읽어와야 한다
    while (std::getline(file, line) && itemCount < MAX_ITEMS) 
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;
        int count;
        int typeCount;
        int amount;

        // 데이터 파싱
        if (iss >> index >> name >> price >> count >> typeCount >> amount)
        {
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, count, newType);

        }
        else
        {
        std::cerr << "유효하지 않은 데이터가 존재합니다 : " << line << std::endl;
        }

    }

    file.close();

    return itemCount;
}
