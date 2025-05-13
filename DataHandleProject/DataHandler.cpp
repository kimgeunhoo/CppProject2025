#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{
    std::ifstream file(filename);

    if (!file.is_open()) // ������ ������ �ʾ��� ��
    {
        std::cerr << "������ ���� ���߽��ϴ�." << filename << std::endl;
        return 0;
    }

    int itemCount = 0;
    std::string line;

    // item �׸��� �о�;� �Ѵ�
    while (std::getline(file, line) && itemCount < MAX_ITEMS) 
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;
        int count;
        int typeCount;
        int amount;

        // ������ �Ľ�
        if (iss >> index >> name >> price >> count >> typeCount >> amount)
        {
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, count, newType);

        }
        else
        {
        std::cerr << "��ȿ���� ���� �����Ͱ� �����մϴ� : " << line << std::endl;
        }

    }

    file.close();

    return itemCount;
}
