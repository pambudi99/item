#include <iostream>
#include <string>

int main()
{
    std::string nama_item = "";
    std::string prev_item = "";
    std::string item_terkuat= "";
    std::string item_terlemah = "";
    char lagi = 'y';
    float stat = 0;
    float prev_stat = 0;
    float stat_terkuat = 0;
    float stat_terlemah = 0;
    bool first = true;

    while(lagi=='y') {
        std::cout << "Silahkan masukkan nama item : ";
        std::cin >> nama_item;
        std::cout << "Masukkan level : ";
        std::cin >> stat;
        std::cout <<"========================" ;
        std::cout << "\nItem Anda adalah : " << nama_item;
        std::cout << "\nlevel item anda: " << stat;
        std::cout <<"\n========================" ;
        if (first == true) {
            prev_item = "Nothing";
            item_terkuat = nama_item;
            item_terlemah = nama_item;
            stat_terkuat = stat;
            stat_terlemah = stat;
        } else {
            if(stat >= stat_terkuat) {
                stat_terkuat = stat;
                item_terkuat = nama_item;
            }else{
                if(stat <= stat_terlemah) {
                    stat_terlemah = stat;
                    item_terlemah = nama_item;
                }

            }
        }

        std::cout << "\nItem sebelumnya : " << prev_item;
        std::cout << "\nItem dengan level terkuat: " << item_terkuat;
        std::cout << "\nItem dengan level terlemah : " << item_terlemah;

        prev_item = nama_item;
        prev_stat = stat;
        first = false;
        std::cout << "\n==========================" ;
        std::cout << "\nInput item lagi ? (y/n)" << std::endl;
        std::cin >> lagi;
    }
    char ch; std::cin >> ch;
    return 0;
}
