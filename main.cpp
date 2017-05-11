#include <iostream>
#include <cstring>

char nibble_to_hex (uint8_t i){
char c;
    switch (i)
{
case 0: c='0'; break;
case 1: c='1'; break;
case 2: c='2'; break;
case 3: c='3'; break;
case 4: c='4'; break;
case 5: c='5'; break;
case 6: c='6'; break;
case 7: c='7'; break;
case 8: c='8'; break;
case 9: c='9'; break;
case 10: c='A'; break;
case 11: c='B'; break;
case 12: c='C'; break;
case 13: c='D'; break;
case 14: c='E'; break;
case 15: c='F'; break;
}
    return c;
}
void print_byte (uint8_t byte){
    uint8_t low = byte & 0b00001111;
    uint8_t high = (byte & 0b11110000)>>4;
    std::cout << nibble_to_hex(high) << nibble_to_hex(low);
}
void print_in_hex(const void* data, size_t size){

    auto p = reinterpret_cast <const uint8_t*> (data);
    for (size_t i = 0; i< size; i++ )
    {
        print_byte(p[i]);
        std:: cout<<" ";

    }

};


int main() {
    struct student {
    char name[17];
    size_t year;
    double sr;
    uint32_t sex;
    int count;
    student* batya;
    }s[3];

   strcpy (s[0].name, "Olya");
   s[0].year = 2016;
    s[0].sr = 4.5;
    s[0].sex = 0;
    s[0].count = 0;
    

    strcpy (s[1].name, "Tolya");
    s[1].year = 2016;
    s[1].sr = 4.7;
    s[1].sex = 1;
    s[1].count = 0;
    s[1].batya = &s[0];

    strcpy (s[2].name, "Sergey");
    s[2].year = 2016;
    s[2].sr = 4.8;
    s[2].sex = 1;
    s[2].count = 0;
    s[2].batya = &s[0];

    strcpy (s[3].name, "Alya");
    s[3].year = 2016;
    s[3].sr = 5;
    s[3].sex = 0;
    s[3].count = 0;
    s[3].batya = &s[0];

    int n;
    std:: cin >> n;
    print_in_hex(&n, sizeof(n));
    return 0;
}